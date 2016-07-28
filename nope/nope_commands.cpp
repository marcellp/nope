#include "nope.hpp"

void nope_do(char *arg)
{
	char *raknet_name, *instruction_str, *direction_str;
	int arr_element = -1, instruction, direction;
	bool is_rpc;

	raknet_name = strtok(arg, " ");
	instruction_str = strtok(NULL, " ");
	direction_str = strtok(NULL, " ");

	if (!raknet_name || !instruction_str || !direction_str)
		return pprintf("/nope [raknet packet/RPC] [on/off] [in/out]");

	if (!_strcmpi(instruction_str, "on"))
		instruction = 1;
	else if (!_strcmpi(instruction_str, "off"))
		instruction = 0;
	else
		return pprintf("Invalid instruction (off/on).");

	if (!_strcmpi(direction_str, "in"))
		direction = 0;
	else if (!_strcmpi(direction_str, "out"))
		direction = 1;
	else
		return pprintf("Invalid direction (in/out).");

	for (int i = 0; i < sizeof(nop_raknet) / sizeof(nop_raknet[0]); i++) {
		if (!_strcmpi(raknet_name, nop_raknet[i].name)) {
			arr_element = i;
			is_rpc = nop_raknet[i].is_rpc;
		}
	}

	if (arr_element == -1)
		return pprintf("Invalid packet/RPC name.");

	nop_states[nop_raknet[arr_element].value][is_rpc][direction] = instruction;

	pprintf("state of %s (%d, %s) set to %s.",
		nop_raknet[arr_element].name,
		nop_raknet[arr_element].value,
		(direction == 0) ? ("incoming") : ((direction == 1) ? ("outgoing") : ("incoming/outgoing")),
		(nop_states[nop_raknet[arr_element].value][is_rpc][direction]) ? ("{FF0000}NOP'd{FFFFFF}") : ("{00FF00}not NOP'd{FFFFFF}"));
}

void nope_list_nops()
{
	pprintf("|___________________LIST OF NOP'd DATA___________________|");
	for (int i = 0; i < sizeof(nop_raknet) / sizeof(nop_raknet[0]); i++) {
		if (nop_states[nop_raknet[i].value][nop_raknet[i].is_rpc][0] == true)
			pprintf("{FFFF00}%s{FFFFFF} (%d, incoming)", nop_raknet[i].name, nop_raknet[i].value);
		if (nop_states[nop_raknet[i].value][nop_raknet[i].is_rpc][1] == true)
			pprintf("{FFFF00}%s{FFFFFF} (%d, outgoing)", nop_raknet[i].name, nop_raknet[i].value);
	}
	pprintf("|________________________________________________________|");
}