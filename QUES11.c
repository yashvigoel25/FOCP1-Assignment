/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int scores[50], even_array[50], odd_array[50];
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[evenCount] = scores[i];
            evenCount++;
        } else {
            odd_array[oddCount] = scores[i];
            oddCount++;
        }
    }

    printf("\nEven scores: ");
    if (evenCount == 0)
        printf("None");
    else
        for (i = 0; i < evenCount; i++)
            printf("%d ", even_array[i]);

    printf("\nOdd scores: ");
    if (oddCount == 0)
        printf("None");
    else
        for (i = 0; i < oddCount; i++)
            printf("%d ", odd_array[i]);

    printf("\n");
    return 0;
}
