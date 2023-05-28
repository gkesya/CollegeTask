/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini menggunakan array 1D secara dinamis yang bertipekan char, 
mencetak alamat dari masing-masing index array beserta valuenya.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
char x[5] = {'a','b','c','d','e'};
int i;
for(i = 0;i < 5;i++){
printf("nilai  = %c\n",x[i]);
}
for(i = 0;i < 5;i++){
printf("alamat [%c] = %p\n",x[i]);
}
return 0;
}
