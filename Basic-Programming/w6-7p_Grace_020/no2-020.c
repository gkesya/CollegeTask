/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menampung 10 angka dari inputan user dengan menggunakan array dinamis
*/

#include<stdio.h>
int main()
{
int x[5][2];
	int y;
	int z;
	for(y=0;y < 5;y++)
	{
	 for(z=0;z < 2;z++)
	{
		printf("masukkan angka : \n");
		scanf("%d", &x[y][z]);
	
	}
	printf("\n");
	}
	
	return 0;
}
