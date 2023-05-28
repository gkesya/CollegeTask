/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

/*Pointer dan variabel berukuran multi-byte */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*kamus*/
	//deklarasi dan inisialisasi variabel
	int var_int=123455;
	float var_float=780.478;
	char var_char=65; //huruf A
	
	//deklarasi dan inisialisasi pointer
	int *ptr_int=&var_int;
	float *ptr_float=&var_float;
	char *ptr_char=&var_char;
	
	/*algoritma*/
	printf("Ukuran char = %d\n", sizeof(char));
	printf("Ukuran float = %d\n", sizeof(float));
	printf("Ukuran integer = %d\n", sizeof(int));
	
	//print alamat variabel, alamat yang menunjuk pada byte pertama 
	printf("\n Alamat var_char yang ditunjuk ptr_char = %u", ptr_char);
	printf("\n Alamat var_float yang ditunjuk ptr_char = %u", ptr_float);
	printf("\n Alamat var_int yang ditunjuk ptr_char = %u", ptr_int);
	
	system("PAUSE");
	return 0;
}
