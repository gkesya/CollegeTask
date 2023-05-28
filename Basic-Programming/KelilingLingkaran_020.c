#include <stdio.h>

int main ()
{
	float PHI = 3.14;
	float jari, luas;

	printf("Masukkan jari-jari Lingkaran : ");
	scanf("%f", &jari);
	
	luas =2* PHI*jari;
	printf("Keliling : %f", luas);		
	
getch();
return 0;

}
