#include "bitspace.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

bitspace BS_alloc( size_t size, ...)
{
  int numbytes = size / 8;
  if ( size % 8 ) numbytes++;

  printf( "allocating %d bytes for %ld bits.\n", numbytes, size );
  void* mem = malloc( numbytes );
  memset( mem, 0, numbytes );

  return mem;
}

void BS_free( bitspace bs )
{
  free( bs );
}
