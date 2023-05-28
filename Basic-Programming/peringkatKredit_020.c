/*
Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat digunakan untuk menghitung peringkat kredit dari sebuah nasabah bank.
Tanggal		: 26 September 2020
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main (int argc, char*argv[])
{
	float pokok_utang=atof(argv[1]);
	int masa_tunggak=atoi(argv[2]);
	char peringkat_kredit=atol(argv[3]);
	bool statusApl=false;
	printf("Masukkan pokok utang:%.2f\n",pokok_utang);

	if(pokok_utang<=100000000)
	{

		printf("Masukkan masa tunggak:%d\n",masa_tunggak);
		if(masa_tunggak<=6)
			printf("Peringkat utang anda Jadwalkan\n\n");
		else
			printf("Peringkat utang anda Gagal\n\n");
	}
	else if(pokok_utang>100000000)
	{
		printf("Masukkan masa tunggak:%d\n",masa_tunggak);
		if(masa_tunggak<=12)
			printf("Peringkat utang anda Jadwalkan\n\n");
		else
			printf("Peringkat utang anda Gagal\n\n");
	}
	return 0;
}
