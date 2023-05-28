/* file name : contigious_memory.c*/
/* program yang menunjukkan bagaimana elemen suatu array 
disimpan pada memori yang berdekatan*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
	/*kamus*/
	// jika arr[0] disimpan pada alamat x. maka arr[1] disimpan pada alamat x + sizeof(int)
	// arr[2] disimpan pada alamat x + sizeof(int) +sizeof(int)
	// demikian seterunya 
	int arr[5], 1;
	
printf("Size of integer in this compiler is %u\n", sixeof(int));

for (i=0; i<5; i++)
	// the use of '&' before a variable name, yields
	// address of variable
	printf("Address arr[%d] is %u\n", i, &arr[1]); //%u untuk unsigned integer
	
	system("PAUSE");
	return 0;
	
}
