/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan mengcopy urutan data di array ke array lain dengan urutan terbalik 
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
int x;
int y;
int z;
	printf("Masukkan banyak data : ");
	scanf("%d",&y);	
	for(z = 0;z <= y;z++){
		printf("masukkan data : ");
		scanf("%d",&z);
	}
	for(z < y;z > 0;--z){
		printf("%d\n",z);
	}
	return 0;
}

