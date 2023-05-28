/* 
Nama 	: Grace Agnes Kesya
NIM		: 13320020
Deskripsi	:	Logical ini adalah operator yang digunakan untuk menangani tipe data Boolean (0 atau 1).
				Operator ini membandingkan dua bilangan (operand) bertipe Boolean untuk memecahkan masalah 
				berdasarkan operator yang digunakan.
Tanggal	: 18 September 2020*/

#include <stdio.h>
int main() {
		
		//inisialisasi variabel
		int x, y, a, b;
		
		x = 1 + 4 < 10;
		y = 2 + 6 > 13;
		//AND
		a = x && y;
		//OR
		b = x || y;
		
		//Output
		printf("hasil dari x = 1 + 4 < 10 adalah %d \n", x) ;
		printf("hasil dari y = 2 + 6 > 13 adalah %d\n", y) ;
		printf("hasil dari a = x && y adalah %d\n", a) ;
		printf("hasil dari b = x || y adalah %d\n", b) ;
		printf("hasil dari b = x || y jika menggunakan NOT adalah %d\n", !b);
		
		return 0;
}
