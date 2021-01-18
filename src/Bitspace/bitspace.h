#ifndef BITSPACE_H
#define BITSPACE_H
#include <stdarg.h>
#include <stddef.h>

typedef void* bitspace;

// bs_alloc.c
bitspace BS_alloc( size_t size, ...);
void BS_free( bitspace bs );

// bs_operations.c
char BS_get   ( int bit, bitspace bs );
void BS_set   ( int bit, bitspace bs );
void BS_clear ( int bit, bitspace bs );
void BS_flip  ( int bit, bitspace bs );

void BS_dump( size_t size, bitspace bs );

#endif
