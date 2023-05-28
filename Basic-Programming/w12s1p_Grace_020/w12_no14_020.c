/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menghitung gross salary
*/

#include <stdio.h>

int main(){
	char nama[60];
	float Basic, HRA_Per, DA_Per, HRA, DA, Gross_Salary;
	printf("----------------------------------------");
	printf("\n   PROGRAM MENGHITUNG GROSS SALARY \n");
 	printf("----------------------------------------\n");
	printf("\n Masukkan nama dari pegawai :  ");
  	gets(nama);
			printf("\n Masukkan gaji dasar pegawai :  ");
  				scanf("%f", &Basic);
			printf("\n Masukkan presentase  HRA pegawai  :  ");
  				scanf("%f", &HRA_Per);
  			printf("\n Masukkan presentase DA pegawai  :  ");
  				scanf("%f", &DA_Per);
	    HRA = Basic * (HRA_Per /100); 
		DA = Basic * (DA_Per / 100);  	
	Gross_Salary = Basic + HRA + DA;
	printf("\n Nama = %s \n Basic Salary = %.2f \n Jumlah HRA  = %.2f \n Jumlah DA   = %.2f \n Gross Salary = %.2f", nama, Basic, HRA, DA, Gross_Salary); 
	return 0;
}
