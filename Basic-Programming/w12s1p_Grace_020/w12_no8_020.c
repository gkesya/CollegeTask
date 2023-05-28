/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan suatu karakter adalah sebuah alfabetikal atau tidak
*/

#include <stdio.h>

int main(){
	char a;
	printf("------------------------------------");
  	printf("\n   PROGRAM MENENTUKAN ALFABETIKAL \n");
  	printf("------------------------------------\n");
	printf("Masukkan karakter : ");
	scanf("%s", &a);
	if(a >= 'a' && a <='z'){
		printf("Yang anda masukkan adalah alfabetikal");
	}
	
	else {
		printf("Yang anda masukkan bukan alfabetikal");
	}
	
	
	return 0;
}

