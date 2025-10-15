#pragma once

#define RCCL_HAVE_GLOBAL_DWORDX4_BUILTINS 1

typedef __attribute__((__vector_size__(4 * sizeof(unsigned int)))) unsigned int v4u;
typedef __attribute__((address_space(1))) v4u* v4u_gptr;

union alignas(16) RCCLPack16{
    uint64_t u64[2];
    v4u v4u;
};
