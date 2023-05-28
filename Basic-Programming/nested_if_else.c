/*
Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat Mengetahui Apakah aplikasi ditolak atau diterima hanya dengan memasukkan umur dan jumlah gaji
Tanggal		: 26 September 2020
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int umur=atoi(argv[1]);
	float gaji=atof(argv[2]);
	bool statusApl=false;
	printf("Umur Anda:%d\n",umur);
	printf("Gaji anda:%.2f\n\n",gaji);
	if(umur>60)
	{
		statusApl=false;
		printf("Aplikasi anda ditolak\n");
	}
	else if (gaji<3000000)
	{
		statusApl=false;
		printf("Aplikasi anda ditolak\n");
	}
	else
	{
		statusApl=true;
		printf("Aplikasi anda diterima\n");
	}
	return 0;
}
