/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void method1_temp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("1) Using temp variable: a = %d, b = %d\n", a, b);
}

void method2_arithmetic(int a, int b) {
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("2) Using arithmetic: a = %d, b = %d\n", a, b);
}

void method3_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("3) Using XOR: a = %d, b = %d\n", a, b);
}

void method4_pointer(int *a, int *b) {
    
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("4) Using pointers: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values:\na = %d, b = %d\n\n", a, b);

    method1_temp(a, b);
    method2_arithmetic(a, b);
    method3_xor(a, b);
    method4_pointer(&a, &b);

    printf("\nAfter swap: a = %d, b = %d\n", a, b);


    return 0;
}
