/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

/* Fig. 7.13: fig07_13.c
	Attempting to modify a constant pointer to
	non-constant data */
	
#include <stdio.h>

int main ()
{
	int x, y;
	
	int * const ptr = &x; 
	/* ptr is a constant pointer to an integer, An integer
	can be modified through ptr,but ptr always points 
	to the same memory location */
	
	*ptr = 7;
	ptr = &y;
	
	return 0;
}
