/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

#include <stdio.h>
int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main(void)
{
	int i;
	ptr = &my_array[0]; /*Pointer to the first element of the array.. Line A*/
		for (i = 0; i < 6; i++)
		{
			printf("my_array[%d] = %d", i, my_array[i]);  	/*<Line B*/
		}	 
		return 0;
}
