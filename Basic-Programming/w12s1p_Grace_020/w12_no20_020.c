/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menghitung penjumlahan deret pecahan
*/

#include<stdio.h>
    
int main()
{
	int i,N;
	float sum;
	
	printf("--------------------------------------------------");
	printf("\n   PROGRAM MENGHITUNG PENJUMLAHAN DERET PECAHAN  \n");
 	printf("--------------------------------------------------\n");
	printf("Masukkan Nilai Dari N: ");
	scanf("%d",&N);
	
	sum=0.0f;
	for(i=1;i<=N;i++)
		sum = sum + ((float)1/(float)i);	
	printf("Maka hasil penjumlahan dari deret pecahan adalah = %f\n",sum);
	
	return 0;
}

