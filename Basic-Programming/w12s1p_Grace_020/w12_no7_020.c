/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan tahun kabisat atau tidak
*/
#include <stdio.h>
int main(){
  int tahun;
  printf("---------------------------------------");
  printf("\n   PROGRAM MENENTUKAN TAHUN KABISAT \n");
  printf("---------------------------------------\n");
  printf("Masukkan tahun: ");
  scanf("%d", &tahun);
  if (tahun%400 == 0){
    printf("Maka %d Merupakan Tahun Kabisat\n", tahun);
  } else if(tahun%100 == 0){
    printf("Makan %d Bukan Tahun Kabisat\n", tahun);
  } else if(tahun%4 == 0){
    printf("Maka %d Merupakan Tahun Kabisat\n", tahun);
  } else {
    printf("Maka %d Bukan Tahun Kabisat\n", tahun);
  }
  return 0;
}
