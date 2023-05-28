/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan nilai maksimum dari 2 bilangan yang dimasukkan
Tanggal		: 26 September 2020
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main (int argc, char *argv[])
{

	int a, b, maks, i;
	printf("---------------------------------------------------------");
	printf("\n 	   MENENTUKAN NILAI MAKSIMUM ANTARA 2 BILANGAN\n\n");
	printf("---------------------------------------------------------\n");
	printf("Masukkan Bilangan ke-1 : ");scanf("%d", &a);
	maks=a;
	printf("Masukkan Bilangan ke-2 : ");scanf("%d", &b);
	if(b>maks) (maks=b);

	printf("\n--------------------------------------------------------");
	printf("\n\nBilangan yang dimasukkan : %d dan %d", a, b);
	printf("\nNilai Maksimum : %d", maks);
	printf("\n\n\n-----------------Terima Kasih-----------------------\n\n\n");
	
	system("pause");
	return 0;
}
	
