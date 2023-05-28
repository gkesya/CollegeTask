/*File name:single_dimensional_array_dynamic_input_DY_13320020.c*/
/*Program yang membuat array satu dimensi*/
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
	for (i=0;i<sz;i++){
		printf("Masukkan nilai array a[%d]:",i);
		scanf("%d",&a[1]);		
	}
		
		
	//Print the elements of array
	for(i=0;i<sz;i++)
		printf("%d\n", a[i]);
		
	system("PAUSE")
	return 0;
}
