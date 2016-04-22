#include "nope.hpp"

bool CALLBACK nope_packet_in(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][0][0])
		return false;

	return true;
}

bool CALLBACK nope_packet_out(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][0][1])
		return false;

	return true;
}

bool CALLBACK nope_rpc_in(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][1][0])
		return false;

	return true;
}

bool CALLBACK nope_rpc_out(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][1][1])
		return false;

	return true;
}