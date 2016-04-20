#pragma once

typedef struct nop_list nop_list;
struct nop_list
{
	const char *name;
	const int value;
	const bool is_rpc;
};

typedef struct nop_data nop_data;
struct nop_data
{
	bool is_noped;
	int nop_end_ms;
};

extern nop_list nop_raknet[189];
extern nop_data nop_rpcs[255][2];