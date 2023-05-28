/* 
Nama 	: Grace Agnes Kesya 
NIM		:13320020
Deskripsi 	: Bitwise adalah operator yang  khusus untuk menangani operasi logika bilangan biner dalam bentuk bit.
Tanggal		: 18 September 2020*/

#include <stdio.h>

int main(){
	int a = 5, b = 9; // a =5(0101), b = 9(1001)
	
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a&b);
	printf("a|b = %d\n", a|b);
	printf("a^b = %d\n", a^b);
	printf("~a = %d\n", a = ~a);
	printf("b<<1 = %d\n", b<<1);
	printf("b>>1 = %d\n", b>>1);
	return 0;
}
