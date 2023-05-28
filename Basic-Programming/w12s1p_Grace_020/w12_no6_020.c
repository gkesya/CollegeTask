/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan apakah suatu bilangan dapat dibagi dengan 5 atau 11
*/

#include <stdio.h>

int main (){
	int y;
	printf("-------------------------------------------");
  	printf("\n   PROGRAM MENENTUKAN PEMBAGI BILANGAN \n");
  	printf("-------------------------------------------\n");
	printf("Masukkan Angka : " );
	scanf("%d", &y);
	
	if ((y%5 || y%11) ==0){
		printf("\n%d Dapat Dibagi Angka 5 Dan 11", y);
	}
	else if (y==0){
		printf("\n%d Tidak Dapat Membagi Angka 5 Dan 11", y);
	}
	else {
		printf("\n%d Tidak Dapat Membagi Angka 5 Dan 11", y);
	}
	
	return 0;
}
