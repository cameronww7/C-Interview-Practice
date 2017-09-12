/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Reverse bits of a given 32 bits unsigned integer.
 *
 *			For example, given input 43261596 (represented in binary as
 *			00000010100101000001111010011100), return 964176192
 *			(represented in binary as 00111001011110000010100101000000).
 *************************************************************************/

#include "../src/header.h"

uint32_t reverseBits(uint32_t n) {
	uint32_t reverseBitStorage = 0;

    for(int bitLocation = 0; bitLocation < 32; bitLocation++) {
    	reverseBitStorage = (reverseBitStorage << 1) + ( n >> bitLocation & 1);
    }

    return reverseBitStorage;
}
