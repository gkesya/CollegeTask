/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan apakah suatu alfabet termasuk Uppercase atau Lowercase
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("---------------------------------------------------------");
	printf("\n   PROGRAM MENENTUKAN UPPERCASE ATAU LOWERCASE \n");
 	printf("---------------------------------------------------------\n");
    printf("Masukkan alfabet :  ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    	{
        	printf("'%c' adalah alfabet Uppercase.", ch);
    	}
    	else if(ch >= 'a' && ch <= 'z')
    	{
        	printf("'%c' adalah alfabet Lowercase.", ch);
    	}
    	else
    	{
        	printf("'%c' is not an alphabet.", ch);
    	}

    return 0;
}
