#pragma once

typedef struct nop_list nop_list;
struct nop_list
{
	char *name;
	int value;
	bool is_rpc;
};

//nop_states[rpc/packet id][0: packet 1: rpc][0: incoming 1: outgoing]
extern bool nop_states[255][2][2];

extern nop_list nop_raknet[189];