/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan apakah ketiga sudut yang diinput dapat membentuk segitiga yang valid atau tidak.
*/

#include<stdio.h>
int main(){
	int a,b,c,hasil;
	printf("---------------------------------------------------------");
	printf("\n   PROGRAM MENENTUKAN SEGITIGA VALID ATAU TIDAK \n");
 	printf("---------------------------------------------------------\n");
	printf("Masukkan besar sudut pertama : ");
		scanf("%d",&a);
	printf("Masukkan besar sudut kedua : ");
		scanf("%d",&b);
	printf("Masukkan besar sudut ketiga : ");
		scanf("%d",&c);
	hasil=a + b + c;
		printf("\nHasilnya penjumlahan ketiga sudut adalah = %d \n",hasil);
		
	if (hasil % 180 == 0)
  	{
    	printf("Maka ketiga sudut ini dapat membentuk segitiga valid \n", hasil);
  	}
  	else
  	{
    	printf("Maka ketiga sudut ini tidak dapat membentuk segitiga valid \n", hasil);
  	}
  	return 0;
}
	

