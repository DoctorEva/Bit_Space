#include <stdio.h>
#include <stdlib.h>
#include "Bitspace/bitspace.h"

int main( int argc, char** argv )
{
  int nbits = 50;
  bitspace foo = BS_alloc( nbits ); // alocate at least 50 bits.

  BS_dump( nbits, foo );

  BS_set( 34, foo );
  BS_dump( nbits, foo );

  BS_clear( 34, foo);
  BS_dump( nbits, foo );

  BS_flip( 34, foo);
  BS_dump( nbits, foo );

  BS_flip( 34, foo);
  BS_dump( nbits, foo );
}
