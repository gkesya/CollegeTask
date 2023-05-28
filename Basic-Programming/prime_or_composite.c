/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
Kelas		: D3TK1
Deskripsi	: Program berfungsi untuk menentukan suatu bilangan prima atau tidak menggunakan do while statement
*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
		int i=1,num,c=0;
		printf("\nEnter the number : ");
		scanf("%d", &num);
		do
		{
			if(num%i==0)
				c++;
			i++;
		}while(i<=num);
		
		 if(c==2)
		 	printf("\n%d is a prime number",num);
		else 
			printf("\n%d is a composit number",num);
		return 0;
}
