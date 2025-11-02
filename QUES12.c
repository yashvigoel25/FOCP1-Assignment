/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int scores[50], n, i;
    int max, min;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    min = scores[0];

    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

    printf("\nHighest score = %d", max);
    printf("\nLowest score = %d\n", min);
    
    return 0;
}
