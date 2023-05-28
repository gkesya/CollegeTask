/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

/*Menampilkan alamat dari elemen array */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*kamus*/
	int int_array[10],i;
	float float_array[10];
	double double_array[10];
	
	/*algoritma*/
	//print judul tabel
	printf("\t\tInteger\t\tFloat\t\tDouble");
	printf("\n====================================");
	printf("=========================");
	
	//print alamat dari setiap elemen array
	for(i=0;i<10;i++){
		printf("\nElemen %u:\t%u\t\t%d\t\t%d", i,&int_array[i], &float_array[i], &double_array[i]);
		printf("\n===================================");
		printf("===========================");
	}
	system("PAUSE");
	return 0;
}
