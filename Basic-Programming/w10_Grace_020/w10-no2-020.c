/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menampung dua buah variable yang bertipekan float, 
kemudian menjumlahkan kedua angka tersebut lewat penggunaan pointer.
*/
#include<stdio.h>
#include<stdlib.h>

float cetak(float * x,float * y){
return *x + *y; 
}
int main()
{
float *x;
float *y;
float *jlh;
printf("masukkan angka : ");
scanf("%f",&x);
printf("masukkan angka : ");
scanf("%f",&y);
jlh = (&x,&y);
printf("jumlah = %.2f\n",jlh);
return 0;
}

