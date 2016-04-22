#pragma once

bool CALLBACK nope_packet_in(stRakNetHookParams *params);
bool CALLBACK nope_rpc_in(stRakNetHookParams *params);
bool CALLBACK nope_packet_out(stRakNetHookParams *params);
bool CALLBACK nope_rpc_out(stRakNetHookParams *params);