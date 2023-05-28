/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan menampung beberapa karakter dari inputan user tanpa ada batasan 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int panjang=0;
    int Nilai[panjang];
    int i;


    printf("Masukkan Banyak Karakter yang akan diinput :");
    scanf("%d",&panjang);
    
    for(i=0;i<panjang;i++)
    {
      printf("Masukkan Karakter ke [%d]:",i);
      scanf("%s",&Nilai[i]);
    }
    
    printf("\nKarakter terdiri atas :\n");
    for(i=0;i<panjang;i++)
    {
  printf("Karakter ke [%d] = %s \n",i,Nilai[i]);
                     
    }
    
 getch();
}
