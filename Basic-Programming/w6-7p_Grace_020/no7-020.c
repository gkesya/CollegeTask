/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini mencetak total karakter yang diinput oleh user
*/


#include <stdio.h>
#include <string.h>
int main() 
{
  char kalimat[100];
  int jlh;
  
  printf("Masukkan karakter: \n" );
  fgets(kalimat, sizeof(kalimat), stdin);
  
  jlh = strlen(kalimat)-1;
  {
  	 printf("Jumlah karakter adalah %d\n", jlh);
  }
  return 0;
}
