/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int hcf(int a, int b) {

    if (b == 0)
        return a;
        
    return hcf(b, a % b);
}

int main() {
    int n1, n2, result;

    printf("Enter two numbers to find their HCF: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;
    
    result = hcf(n1, n2);

    printf("HCF of %d and %d is %d\n", n1, n2, result);

    return 0;
}
