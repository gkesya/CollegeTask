/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menampung beberapa karakter dan mencetak total keseluruhan angka 
*/

#include<stdio.h>

int main()
{
int x[5][5];
int y;
int z;
int jumlah;
	for(y = 0;y < 5;y++){
	for(z = 0;z < 5;z++){
	printf("");
	scanf("%d",&x[y][z]);
	}	
	}
	for(y = 0;y < 5;y++){
	for(z = 0;z < 5;z++){
	jumlah = jumlah + x[y][z];
	printf("hasil penjumlahan  = %d\n",jumlah);
	}	
	}
	return 0;
}

