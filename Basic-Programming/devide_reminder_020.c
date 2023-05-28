#include <stdio.h>

int main ()

{
	int a,b,c;
	
	printf("Masukkan angka :", &a);
	scanf("%i", &a);
	printf("Masukkan angka :", &b);
	scanf("%i", &b);
	printf("%d mod %d = %d\n", a, b, (a%b));
	printf("%d div %d = %d\n", a, b, (a/b));

	return 0;
}
