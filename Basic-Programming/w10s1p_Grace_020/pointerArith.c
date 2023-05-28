/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

#include <stdio.h>

int x[4] = {12, 20, 39, 43}, *y;
y = &x[0];		// y points to the beginning of the array
printf("%d\n", x[0]);  //outputs 12
printf("%d\n", *y); 	// also outputs 12
printf("%d\n", *y+1);	// outputs 13(12+1)
printf("%d\n", (*y)+1); 		// also ouputs 13
printf("%d\n", *(y+1));		//outputs x[1] or 20
y+ = 2;		// y nowpoints to x[2]
printf("%d\n", *y); //prints out 39
*y = 38; 		//changes x[2] to 38
printf("%d\n", *y-1);  //prints out x[2] - 1 or 37
*y++;		// sets wy to point at the next array element
printf("%d\n", *y);		//outputs x[3] (43)
(*y)++; 		//sets what y points to be 1 greater
printf("%d\n", *y);		//outputs the new value of x[3] (44)

}
