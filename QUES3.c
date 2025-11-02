/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    int carry;

    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    
    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    int neg_b = ~b;
    int one = 1;

    while (one != 0) {
        carry = (neg_b & one) << 1;
        neg_b = neg_b ^ one;
        one = carry;
    }
    
    while (neg_b != 0) {
        carry = (a & neg_b) << 1;
        a = a ^ neg_b;
        neg_b = carry;
    }
    
    printf("Result (a - b): %d\n", a);

    return 0;
}