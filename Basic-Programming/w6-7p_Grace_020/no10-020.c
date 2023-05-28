/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan mengurutkan data pada array secara ascending lalu digabungkan menjadi satu array
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float x[4] = {1.1,2.2,3.3,4.4};
	float y[4] = {5.5,6.6,7.7,8.8};
	
	int j,k,l;
	
	for(j = 0; j < 4;j++){
	    printf("%.1f\n",x[j]);	
	}
	printf("========\n");
	for(k = 0;k < 4;k++){
		printf("%.1f\n",y[k]);
	}
	printf("array gabungan : \n");
	float z[8] = {1.1,2.2,3.3,4.4,5.5,7.7,8.8,6.6};
	for(l = 0;l < 8;l++){
		printf("%.1f\n",z[l]);
	}
	
	printf("ascending array = \n");
	for(l < 8;l >= 0;l--){
		printf("%.1f\n",z[l]);
	}
	
	

	return 0;
}
