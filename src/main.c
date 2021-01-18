#include <stdio.h>
#include <stdlib.h>
#include "Bitspace/bitspace.h"

int main( int argc, char** argv )
{
  int nbits = 50;
  bitspace foo = BS_alloc( nbits ); // alocate at least 50 bits.

  puts("initial 50 bits.");
  BS_dump( nbits, foo );

  puts("Setting bit 34 to true.");
  BS_set( 34, foo );
  BS_dump( nbits, foo );
  printf( "Test: 34 is set to %s\n", BS_get( 34, foo ) ? "TRUE" : "FALSE");

  puts("Setting 32 false.");
  BS_unset( 34, foo);
  BS_dump( nbits, foo );

  puts("Flipping 32.");
  BS_flip( 34, foo);
  BS_dump( nbits, foo );

  puts("Flipping 32 again.");
  BS_flip( 34, foo);
  BS_dump( nbits, foo );

  BS_free( foo );
}
