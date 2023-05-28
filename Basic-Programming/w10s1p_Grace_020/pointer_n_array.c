/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

/* pointer dan elemen array */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*kamus*/
	int array[5] = {100,200,300,400,500};
	int *ptr;
	
	/*algoritma*/
	printf("Alamat elemen ke-1 array (array[0]) = %u\n", &array[0]);
	printf("Alamat elemen ke-1 array (array[0]) = %u\n", array);
	ptr = array; //ptr = &array[0];
	printf("Alamat elemen ke-1array (array[0]) melalui pointer = %u\n", ptr);
	
	//akses langsung melalui array
	printf("Elemen pertama array (array[0])= %d\n", array[0]);
	//akses tak langsung (indirection operator)
	printf("Elemen pertama array (array[0]) melalui pointer = %d\n", *ptr);
	
	system("PAUSE");
	return 0;
	
}
