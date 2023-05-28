/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
Kelas		: D3TK1
Deskripsi	: Program berfungsi untuk menghitung jumlah bilangan genap yang terdapat diantara 2 bilangan menggunakan while statement
*/

#include<stdio.h>

int main ()
{
		int lower, upper, sum = 0;
		
		printf("Enter lower limit : ");
		scanf("%d", &lower);
		printf("Enter upper limit : ");
		scanf("%d", &upper);
		
		printf("\nSum of even numbers from %d to %d is ", lower, upper);
		while(lower <= upper)
		{
			if(lower%2 == 0)
			{
				sum = sum + lower;
			}
			lower++;
		}
		printf("%d\n", sum);
		
		return 0;
}
