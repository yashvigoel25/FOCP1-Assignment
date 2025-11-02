/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int scores[50], n, i, found = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("First occurrence of 99 is at position %d.\n", i + 1);
            found = 1;
            break;  
        }
    }

    if (!found)
        printf("Score 99 not found in the list.\n");

    return 0;
}
