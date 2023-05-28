/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan nilai inputan termasuk positif, negati atau netral
*/

#include"stdio.h"
main()
{
	int x;
	printf("------------------------------------------------------ \n");
	printf("PROGRAM MENENTUKAN BILANGAN POSITIF, NEGATIF & NETRAL\n");
	printf("------------------------------------------------------ \n");
	printf("Masukan Nilai : ");
	scanf("%i",&x);
	if(x==0)
	{
		printf("Bilangan tersebut bernilai nol atau netral\n");
	}
	else if(x>0)
	{
		printf("Bilangan tersebut bernilai positif\n");
	}
	else
	{
		printf("Bilangan tersebut bernilai negatif\n");
	}
}
