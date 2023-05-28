/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat mencetak keluaran
*/

#include <stdio.h>

int main(){
	int x =10;
	int y =5;
	x +=y;
	printf("x + = y : %d",x);
	x -= x - y - 2;
	printf("\nx -= y - 2 : %d",x);
	x = 10 * y*5;
	printf("\nx *= y * 5 : %d",x);
	x /= x/y;
	printf("\nx/ = x/y : %d",x);
	x%= y;
	printf("\nx % = y : %d",x);
	
	return 0;
}
