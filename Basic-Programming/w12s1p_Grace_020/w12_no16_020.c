/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menampilkan alfabet dari A - Z.
*/

#include <stdio.h>
#include <conio.h>
main ()
{
	char abjad;
		printf("----------------------------------------");
		printf("\n   PROGRAM MENAMPILKAN ALFABET A - Z \n");
 		printf("----------------------------------------\n");
	for (abjad='A'; abjad<='Z'; abjad++)
	{
		printf (" %c ", abjad);
	}
		getch ();
	}
