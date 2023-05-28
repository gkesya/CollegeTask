/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan ganjil atau genap suatu bilangan 
Tanggal		: 26 September 2020
*/

#include <stdio.h>

int main()
{
	int x;
	printf("masukkan sebuah bilangan bulat: ");
	scanf("%d",&x);
	if (x%2==0)
		printf("%d bilangan genap\n", x);
	else
		printf("%d bilangan ganjil\n", x);
	getch();
	return 0;
}
