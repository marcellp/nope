#include "nope.hpp"

bool CALLBACK nope_packet(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][0])
		return false;

	return true;
}

bool CALLBACK nope_rpc(stRakNetHookParams *params)
{
	if (nop_states[params->packetId][1])
		return false;

	return true;
}