/*
Nama  : Grace Agnes Kesya
Kelas : D3TK1
NIM	  : 13320020
Deskripsi : Program ini akan membuat array 2D dinamis yang akan menampung bilangan 
integer dengan ketentuan elemen-elemen array akan bergeser satu langkah ke index setelahnya
*/

#include<stdio.h>

int main()
{
int x[3][3];
int j,k;
	
for(j = 0;j < 3;j++){
for(k = 0;k < 3;k++){
    printf("Masukkan Angka Penyusunnya : ");
    scanf("%d",&x[j][k]);
	}
}
printf("Cetakan Matriks Anda : \n");
for(j = 0;j < 3 ;j++){
    for(k = 0;k < 3;k++){
printf("%d    ",x[j][k]);
}
printf("\n");
}
return 0;
}


