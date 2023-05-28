/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan grade dari  nilai yang didapat
Tanggal		: 26 September 2020
*/

#include <stdio.h>

int main()
{

	//kamus;
	float x;
	char ch;
	//Algoritma
	printf("Masukkan nilai kuliah anda: ");
	scanf("%f", &x);
	if (x>=80) ch='A';
	else if (x>=65) ch = 'B';
	else if (x>=50) ch = 'C';
	else if (x>=35) ch = 'D';
	else ch = 'E';
	printf("Anda mendapatkan grade %c\n", ch);
	getch();
	return 0;
}
