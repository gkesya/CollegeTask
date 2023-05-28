/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menghitung total perkalian untuk bilangan
ganjil mulai dari 1 sampai n
*/

#include <stdio.h>
int main()
{
    int i, n, jumlah=0;
	printf("---------------------------------------------------------");
	printf("\n   PROGRAM MENGHITUNG TOTAL PERKALIAN BILANGAN GANJIL \n");
 	printf("---------------------------------------------------------\n");
    printf("Masukkan nilai \t: ");
    	scanf("%d", &n);
    for(i=1; i<=n; i+=2)
    	{
        	jumlah += i;
    	}
	printf("Jumlah angka ganjil = %d", jumlah);

    return 0;
}
