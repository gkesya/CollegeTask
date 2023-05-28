/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menampung 10 angka dari inputan user dengan menggunakan array statik
*/

#include <stdio.h>

void main(){
    // membuat array kosong
    int nilai[10];

    // mengisi  array
    printf("Masukkan nilai ke 1 : ");
    scanf(" %d", &nilai[1]);
    printf("Masukkan nilai ke 2 : ");
    scanf(" %d", &nilai[2]);
    printf("Masukkan nilai ke 3 : ");
    scanf(" %d", &nilai[3]);
    printf("Masukkan nilai ke 4 : ");
    scanf(" %d", &nilai[4]);
    printf("Masukkan nilai ke 5 : ");
    scanf(" %d", &nilai[5]);
    printf("Masukkan nilai ke 6 : ");
    scanf(" %d", &nilai[6]);
    printf("Masukkan nilai ke 7 : ");
    scanf(" %d", &nilai[7]);
    printf("Masukkan nilai ke 8 : ");
    scanf(" %d", &nilai[8]);
    printf("Masukkan nilai ke 9 : ");
    scanf(" %d", &nilai[9]);
    printf("Masukkan nilai ke 10 : ");
    scanf(" %d", &nilai[10]);
    printf("Bilangannya terdiri atas %d %d %d %d %d %d %d %d %d %d", nilai[1], nilai[2], nilai[3], nilai[4], nilai[5], nilai[6], nilai[7], nilai[8], nilai[9], nilai[10]);
   
    
    return 0;
}
