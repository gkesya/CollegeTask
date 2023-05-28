/* 
Nama	: Grace Agnes Kesya
NIM		: 13320020
Kelas 	: 31TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
int pilihan, pil;
float alas, tinggi, panjang, lebar, sisi, d1, d2, r, luas;
mulai:
	printf("====Program Menghitung Bangun Datar=====\n");
	printf("************************\n");
	printf("1. Persegi \n");
	printf("2. Persegi Panjang \n");
	printf("3. Lingkaran \n");
	printf("4. Jajar Genjang \n");
	printf("5. Trapesium \n");
	printf("6. Layang - layang \n");
	printf("7. Keluar \n");
	printf("====================================\n\n");
	printf("Masukkan Pilihan Anda : ");
	scanf_s("%d", &pilihan);
	switch (pilihan)
{
case 1 :
	
	printf("\n");
	printf("====Menghitung Luas Persegi==== \n");
	printf("Masukkan Nilai Sisi : ");
	scanf_s("%f", &sisi );
	luas = sisi * sisi;
	printf("Luas Persegi : %.3f \n", luas);
	printf("============================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
 		if(pil == 1)
		goto mulai;
		else
		exit;
	return(0);
	break;
	
case 2 :
	
	printf("\n");
	printf("====Menghitung Luas Persegi Panjang==== \n");
	printf("Masukkna Nilai Panjang : ");
	scanf_s("%f", &panjang);
	printf("Masukkan Nilai Lebar : ");
	scanf_s("%f", &lebar);
	luas = panjang * lebar;
	printf("Luas Persegi Panjang : %.3f \n", luas);
	printf("====================================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
 
		if(pil == 1)
		goto mulai;
		else
		exit;
	return(0);
	break;
	
case 3 :
	
	printf("\n");
	printf("====Menghitung Luas Lingkaran===== \n");
	printf("Masukkna Nilai Jari-Jari Lingkaran : ");
	scanf_s("%f", &r);
	luas = 3.14 * r * r;
	printf("Luas Lingkaran : %.3f \n", luas);
	printf("================================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
		if(pil == 1)
		goto mulai;
		else
		exit;
	return(0);
	break;

case 4:
	
	printf("\n");
	printf("====Menghitung Luas Jajar Genjang==== \n");
	printf("Masukkna Nilai alas : ");
	scanf_s("%f", &alas);
	printf("Masukkan Nilai Tinggi : ");
	scanf_s("%f", &tinggi);
	luas = alas * tinggi;
	printf("Luas Jajar Genjang : %.3f \n", luas);
	printf("====================================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
 		if(pil == 1)
		goto mulai;
		else
	exit;
	return(0);
	break;

case 5:
	
	printf("\n");
	printf("====Menghitung Luas Trapesium==== \n");
	printf("Masukkan Nilai Panjang Sisi Sejajar : ");
	scanf_s("%f", &sisi);
	printf("Masukkan Nilai Tinggi :");
	scanf_s("%f", &tinggi);
	luas =( (0.5 * sisi) * tinggi);
	printf("Luas Trapesium = %.3f \n", luas);
	printf("=============================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
		if(pil == 1)
		goto mulai;
		else
		exit;
	return(0);
	break;

case 6:
	
	printf("\n");
	printf("====Menghitung Luas layang-Layang===== \n");
	printf("Masukkna Nilai Diagonal 1 : ");
	scanf_s("%f", &d1);
	printf("Masukkan Nilai Diagonal 2 : ");
	scanf_s("%f", &d2);
	luas = d1 * d2 * 0.5;
	printf("Luas Layang-Layang : %.3f \n", luas);
	printf("====================================== \n");
	printf("1. Kembali Ke Menu Utama \n");
	printf("2. Keluar \n");
	printf("Pilih :");
	scanf_s("%d", &pil);
		if(pil == 1)
		goto mulai;
		else
		exit;
	return(0);
	break;
	
case 8:
exit;
break;

default:
printf("Maaf, Anda Harus Memasukkan Pilihan Sesuai Menu \n");
goto mulai;
break;
}
}
