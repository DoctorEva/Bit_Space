#include "bitspace.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct temp{
  char* ptr;
  char  arg;
} temp;

char* _readByte( int bit, bitspace bs )
{
  int byte = bit / 8;
  return (char*) ( bs + byte );
}

char _arg( int bit )
{
  return ( 1 << ( bit % 8 ) );
}

temp offset( int bit, bitspace bs )
{
  temp o = { _readByte( bit, bs ), _arg( bit ) };
  return o;
}

char get( temp o ) { return ( *o.ptr & o.arg ); }
void set( temp o ) { *o.ptr = ( *o.ptr | o.arg ); }
void clr( temp o ) { *o.ptr = ( *o.ptr & (~o.arg) ); }
// _______________________________________

char BS_get( int bit, bitspace bs )
{
  temp o = offset( bit, bs );
  return get( o );
}

void BS_set( int bit, bitspace bs )
{
  temp o = offset( bit, bs );
  set( o );
}

void BS_unset( int bit, bitspace bs )
{
  temp o = offset( bit, bs );
  clr( o );
}

void BS_flip  ( int bit, bitspace bs )
{
  temp o = offset( bit, bs );
  get( o )  ? clr( o ) : set( o );
}
