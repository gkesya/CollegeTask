/* 	Nama 	: Grace Agnes Kesya 
	NIM		: 13320020
	Deskripsi : Aritmatika adalah ilmu yang mempelajari operasi bilangan. 
				Operator aritmatika yang dapat digunakan adalah kurang,tambah,kali,bagi,modulus,decrement dan increment
	Tanggal	: 18 September 2020 */
	
#include <stdio.h>

int main ()
{
	int x = 10;
	int y = 4;
	float hasil;
	
	printf("Nilai x = %d\t", x) ;
	printf("Nilai y = %d\n\n", y);
	//perkalian
	hasil = x * y;
	printf("x * y = %.2f\n", hasil);
	//pembagi
	hasil = x/y;
	printf("x / y = %.2f\n", hasil);
	//penjumlahan
	hasil = x + y;
	printf("x + y = %.2f\n", hasil );
	//pengurangan
	hasil = x - y;
	printf("x - y = %.2f\n", hasil );
	//modulus
	printf("x mod y = %d\n", x % y);
	
	//increment
	printf("nilai x sebelum x++ = %d\n" , x);
	x = x++;
	printf("nilai x setelah x++ = %d\n\n" , x);
	
	printf("nilai y sebelum y++ = %d\n" , y);
	y = y++;
	printf("nilai y setelah y++ = %d\n\n" , y);
	
	//decrement
	printf("nilai x sebelum x-- = %d\n" , x);
	x = x--;
	printf("nilai x setelah x-- = %d\n\n" , x);
	
	printf("nilai y sebelum y-- = %d\n" , y);
	y = y--;
	printf("nilai y setelah y-- = %d\n\n" , y);
	
	return 0;
	
}w
