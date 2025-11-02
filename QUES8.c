/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;  

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("enter a positive number!\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", first);
        } 
        else if (i == 2) {
            printf(", %d", second);
        } 
        else {
            next = first + second;
            printf(", %d", next);
            first = second;   
            second = next; 
        }
    }

    printf("\n");

    return 0;
}
