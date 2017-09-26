/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace {
	const long int _count = 10;
}

void NewAndDelete(void) {
    printf("\n> allocate space for %lu ints at *ip with new", _count);
    int * ip = new int [_count];

    if(ip == NULL) {
        puts("\n> ** new failed ** ");
//        return 1;
    }

    for( int i = 0; i < _count; i++ ) {
        ip[i] = i;
    }

    for( int i = 0; i < _count; i++ ) {
        printf("\n> %d:%d ", i, ip[i]);
        if((i > 0 && i % 25 == 0) || i == _count - 1) puts("");
    }

    delete [] ip;
    puts("\n> space at *ip deleted");
}
