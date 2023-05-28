/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
Kelas		: D3TK1
Deskripsi	: Program berfungsi untuk menghitung deret fibonacci dengan menggunakan for statement
*/

#include <stdio.h>
	int main (){
	printf ("\t\t\tPROGRAM BILANGAN FIBONACCI\n\n");
	int n, a[100], i;
	printf ("\nMasukkan Angka = ");
	scanf ("%d", &n);
	printf ("\nBilangan Fibonacci = ");
	for (i=0;i<n;i++){
	if (i<2) a[i]=i;
	else a[i]=a[i-1]+a[i-2];
	printf ("%d ", a[i]);
	}
}


