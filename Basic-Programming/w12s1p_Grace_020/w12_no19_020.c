/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan berapa banyak bilangan yang dapat membagi 3 diantara 2 rentang bilangan
*/
#include <stdio.h>
 
void main()
{
    int i, x, y, count = 0, sum = 0;
 	printf("------------------------------------");
	printf("\n   PROGRAM MENENTUKAN PEMBAGIAN 3 \n");
 	printf("------------------------------------\n");
    printf("\nMasukkan integer batas awal : "); 
    scanf("%d", &x);
    printf("\nMasukkan integer batas akhir : ");
    scanf("%d", &y);
    printf("Integer yang dapat membagi 3 adalah :\n");
    for (i = x; i < y; i++)
    {
        if (i % 3 == 0)
        {
            printf("%3d,", i);
            count++;
            sum = sum + i;
        }
    }
    printf("\nBanyak integer yang dapat membagi 3 antara %d dan %d adalah %d\n", x, y, count);

}
