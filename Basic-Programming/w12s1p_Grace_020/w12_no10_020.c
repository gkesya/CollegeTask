/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan apakah suatu karakter termasuk ke alfabet, digit atau special character
*/

#include <stdio.h>
int main()
{
    char ch;
    /* Menginput karakter dari user */
    printf("---------------------------------------------------------------");
	printf("\n   PROGRAM MENENTUKAN ALFABET, DIGIT ATAU SPECIAL CHARACTER \n");
 	printf("---------------------------------------------------------------\n");
    printf("Masukkan Karakter : ");
    scanf("%c", &ch);

    /*Pengecekan Karakter*/
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' adalah sebuah alfabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' adalah sebuah angka.", ch);
    }
    else 
    {
        printf("'%c' adalah sebuah karakter spesial.", ch);
    }

    return 0;
}
