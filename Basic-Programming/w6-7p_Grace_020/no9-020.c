/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menggabungkan data data dari dua array menjadi satu array
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int x[4] = {1,2,3,4};
	int y[4] = {5,6,7,8};
int j,k,l;
printf("Data pada Array 1 \n");
for(j = 0; j < 4;j++){
printf("%d\n",x[j]);	
}
printf("========\n");
printf("Data pada Array 2 \n");
for(k = 0;k < 4;k++){
printf("%d\n",y[k]);
}
printf("array gabungan : \n");
int z[8] = {1,2,3,4,5,7,8,6};
for(l = 0;l < 8;l++){
		printf("%d ",z[l]);
	}
	
printf("\ndescending array : \n");
for(l = 0;l < 8-1;l++){
		printf("%d ",z[l]);
	}
	return 0;
}
