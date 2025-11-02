/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int choice, decimal = 0, rem, base = 1;
    long long binary, temp;

    printf("1. Binary to Decimal\n2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        temp = binary;

        while (temp > 0) {
            rem = temp % 10;
            decimal += rem * base;
            base *= 2;
            temp /= 10;
        }

        printf("Decimal: %d\n", decimal);
    } 
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        long long binaryNum = 0;
        base = 1;

        while (decimal > 0) {
            rem = decimal % 2;
            binaryNum += rem * base;
            decimal /= 2;
            base *= 10;
        }

        printf("Binary: %lld\n", binaryNum);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
