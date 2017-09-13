/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			The first line consists of two space separated integers, N and Q.
 * 			N specifies the number of lines in the HRML source program.
 * 			Q specifies the number of queries.
 *
 * 			The following  lines consist of either an opening tag with zero
 * 			or more attributes or a closing tag.There is a space after the
 * 			tag-name, attribute-name, '=' and value.There is no space after
 * 			the last value.
 *
 *			Sample Input
 *			4 3
 *			<tag1 value = "HelloWorld">
 *			<tag2 name = "Name1">
 *			</tag2>
 *			</tag1>
 *			tag1.tag2~name
 *			tag1~name
 *			tag1~value
 *
 *			Sample Output
 *			Name!
 *			Not Found!
 *			HelloWorld
 *
 *************************************************************************/

#include "../../src/header.h"

void HK_AttributeParser() {

}
