/*File name:array_length.c*/
/*Program yang menunjukkan bagaimana menghitung panjang array*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	/*kamus*/
	int length;
	int a[5]; //deklarasi array bertipe integer
			 // terdiri dari 5 elemen 
			 
	printf("Size of array (byte) = %d\n", sizeof(a));
	printf("Size of integer (byte) = %d\n)", sizeof(int));
	
	length = sizeof(a)/sizeof(int); //hitung panjang array
	printf("Array length = %d\n", length);
	
	system("PAUSE");
	return 0;
}
