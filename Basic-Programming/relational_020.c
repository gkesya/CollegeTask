/* 
Nama	: Grace Agnes Kesya
NIM		: 13320020
Deskripsi	: 	Relasional adalah sebuah sistem manajemen penyimpanan berbasis data.
				Operator yang umum digunakan adalah "lebih dari", "lebih atau sama dengan",
				"kecil dari", "kecil atau sama dengan", "sama dengan" ,"tidak sama dengan"
Tanggal	: 18 September 2020*/

#include <stdio.h>

//keterangan ==> 1 = true; 0 = false
int main (){
	int a = 10, b = 20, c;
	
	c = a > b;
	printf("Hasil dari operasi a > b = %d\n",c);
	c = a >= b;
	printf("Hasil dari operasi a >= b = %d\n",c);
	c = a < b;
	printf("Hasil dari operasi a < b = %d\n",c);
	c = a <= b;
	printf("Hasil dari operasi a <= b = %d\n",c);
	c = a == b;
	printf("Hasil dari operasi a == b = %d\n",c);
	c = a != b;
	printf("Hasil dari operasi a != b = %d\n",c);
	return 0;	
}

