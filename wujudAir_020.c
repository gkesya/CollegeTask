/*
Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan wujud dari suatu benda 
Tanggal		: 26 September 2020
*/
#include<stdio.h>
main()
{
int suhu;
	printf("\n\t============================= \n\n");
	printf("\n\t PROGRAM PENENTU WUJUD BENDA \n\n");
	printf("\n\t============================= \n\n");
	printf("Masukkan suhu benda (Celcius): ");
	scanf("%d",&suhu);
	if(suhu < 0)
	printf("\nSuhu benda %d celcius, Benda tersebut adalah benda padat\n\n",suhu);
	else if(suhu < 100)printf("\nSuhu benda %d celcius, Benda tersebut adalah benda cair\n\n",suhu);
	else
	printf("\nSuhu benda %d celcius, Benda tersebut adalah benda gas\n\n",suhu);
}
