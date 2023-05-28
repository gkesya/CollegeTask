/*Nama 		: Grace Agnes Kesya
NIM			: 13320020
Deskripsi	: Program ini dapat menentukan apakah suatu bilangan termasuk bilangan palindrom atau tidak
*/

#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("------------------------------------------------------------");
	printf("\n   PROGRAM MENENTUKAN SUATU BILANGAN PALINDROM ATAU TIDAK \n");
 	printf("------------------------------------------------------------\n");
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversedN)
        printf("%d adalah bilangan palindrome.", originalN);
    else
        printf("%d bukan merupakan bilangan palindrom.", originalN);

    return 0;
}
