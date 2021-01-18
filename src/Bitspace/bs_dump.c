#include "bitspace.h"
#include <stdlib.h>
#include <stdio.h>

void BS_dump( size_t size, bitspace bs )
{
  for( int i = 0; i < size; i++ )
  {
    printf( "%c", BS_get( i, bs ) ? '1' : '0' );
  }
  puts("");
}
