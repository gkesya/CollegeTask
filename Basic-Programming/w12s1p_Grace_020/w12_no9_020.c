/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan sebuah alfabet termasuk konsonan atau vokal.
*/

#include <stdio.h>
int main(){
   char c;
	printf("---------------------------------------------------------");
	printf("\n   PROGRAM MENENTUKAN ALFABET KONSONAN ATAU VOKAL \n");
 	printf("---------------------------------------------------------\n");
   	printf("Masukkan salah satu huruf dari Alphabet: ");
   	scanf("%c",&c);
   		if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
      		printf("%c adalah vokal.",c);
   		else
      		printf("%c adalah konsonan.",c);
   		return 0;
}
