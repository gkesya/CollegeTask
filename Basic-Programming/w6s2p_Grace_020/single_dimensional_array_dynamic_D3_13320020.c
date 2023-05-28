/*File name:single_dimensional_array_dynamic.c*/
/*Program yang membuat array satu dimensi dengan alokasi dinamis*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*kamus*/
	int i; //variabel untuk iterasi
	int *a; //deklarasi array dinamis bertipe integer
	int sz; //variabel yang menampung ukuran array
	
	scanf("%d",&sz);//membaca ukuran array
	a = (int*)malloc(sz*sizeof(int));
	
	// Set the elements of array to i+10
	for (i=0;i<sz;i++)
		a[i] = i+10;
		
	//Print the elements of array
	for(i=0;i<sz;i++)
		printf("%d\n", a[i]);
		
	system("PAUSE")
	return 0;
}
