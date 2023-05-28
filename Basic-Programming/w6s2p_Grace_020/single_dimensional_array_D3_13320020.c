/*File name:single_dimensional_array.c*/
/*Program yang membuat array satu dimensi*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	/*kamus*/
	int 1; //variabel untuk iterasi
	int a[10]; //deklarasi array bertipe integer
			   //dan terdiri dari 10 elemen
			   
	// set the elements of array to i+10
	for (i=0;i<10;i++)
		a[i] = i+10;
	
	//print the elements of array
	for(i=0;i<10;i++)
		printf("%d\n", a[i]);
		
	system("PAUSE");
	return 0;
	
}
