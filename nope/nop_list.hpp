#pragma once

typedef struct nop_list nop_list;
struct nop_list
{
	char *name;
	int value;
	bool is_rpc;
};

extern bool nop_states[255][2];
extern nop_list nop_raknet[189];

void nope_do(char *arg);