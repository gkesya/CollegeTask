/* 
Nama		: Grace Agnes Kesya
NIM			: 13320020
*/

/*Programini yang berisi cara mendeklarasikan, menginisialisasi,dan mengakses pointer */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*kamus*/
	int a_var = 10;//deklarasi sekaligus inisialisasi variabel bertipe integer
	int *a_ptr;//Deklarasi variabel pointer ke variabel tipe integer
	
	/*algoritma*/
	//inisialisasi nilai pointer menunjuk ke alamat a_var
	a_ptr = &a_var; //simbol & dibaca address of(alamat dari)
	
	//Akses dan tampilkan alamat memori yang ditunjuk pointer
	printf("\n Alamat memori ditunjuk a_ptr %u", a_ptr);
	printf("\n Alamat memori variabel pointer  a_ptr %u", &a_ptr);
	printf("\n Alamat memori variabel a_var %u", &a_var);
	
	//Akses dan tampilkan nilai variabel a_var
	printf("\n Akses nilai variabel a_var secara langsung: a_var = %d", a_var);
	printf("\n Akses nilai variabel a_var secara melalui pointer: a_var = %d", *a_ptr);
	
	system("PAUSE");
	return 0;
}
		
