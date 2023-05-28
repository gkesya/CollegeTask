/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menghitung biaya pemakaian listrik
*/

#include <stdio.h>
int main()
{
    int unit;
    float jlh, total_jlh, biaya_tambahan;
	printf("-------------------------------------------------");
	printf("\n   PROGRAM MENGHITUNG BIAYA PEMAKAIAN LISTRIK \n");
 	printf("-------------------------------------------------\n");
    printf("Masukkan jumlah unit yang dikonsumsi : ");
    scanf("%d", &unit);
    	if(unit <= 50)
    		{
        		jlh = unit * 0.50;
    		}
    	else if(unit <= 150)
    		{
        		jlh = 25 + ((unit-50) * 0.75);
    		}
    	else if(unit <= 250)
    	{
        	jlh = 100 + ((unit-150) * 1.20);
    	}
    	else
    	{
        	jlh = 220 + ((unit-250) * 1.50);
    	}
	biaya_tambahan = jlh * 0.20;
    total_jlh  = jlh + biaya_tambahan;

    printf("Jumlah tagihan listrik seluruhnya adalah = Rs. %.2f", total_jlh);

    return 0;
}
