/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan nilai maksimum dari 3 bilangan yang dimasukkan
Tanggal		: 26 September 2020
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main (int argc, char *argv[])
{

	int a, b, c, maks, i;
	printf("---------------------------------------------------------");
	printf("\n 	MENENTUKAN NILAI MAKSIMUM ANTARA 3 BILANGAN\n\n");
	printf("---------------------------------------------------------\n");
	printf("Masukkan Bilangan ke-1 : ");scanf("%d", &a);
	maks=a;
	printf("Masukkan Bilangan ke-2 : ");scanf("%d", &b);
	maks=b;
	printf("Masukkan Bilangan ke-3 : ");scanf("%d", &c);
	if(c>maks) (maks=c);

	printf("\n--------------------------------------------------------");
	printf("\n\nBilangan yang dimasukkan : %d, %d dan %d", a, b, c);
	printf("\nNilai Maksimum : %d", maks);
	printf("\n\n\n-----------------Terima Kasih-----------------------\n\n\n");
	
	system("pause");
	return 0;
}
	
