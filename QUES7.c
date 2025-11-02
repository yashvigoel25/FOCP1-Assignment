/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    int n, i, j;
    int bit = 0;  

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;  
        }

        if (i != n)
            printf(" ");

        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;  
        }

        printf("\n");
    }

    return 0;
}
