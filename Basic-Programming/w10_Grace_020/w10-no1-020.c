/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan mencetak alamat dan value dari sebuah variable yang bertipekan double
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int x;
double **z = (double**) malloc(sizeof(double) * x);
int *y = z;
printf("Masukkan Data : ");
scanf("%.lf",&z);
printf("Alamat Data = %d",*y);
return 0;
}
