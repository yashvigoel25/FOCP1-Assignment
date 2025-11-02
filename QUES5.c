/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float x, y;

    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    printf("\nPoint (%.2f, %.2f) is ", x, y);

    if (x > 0 && y > 0) {
        printf("in the First Quadrant.\n");
    }
    else if (x < 0 && y > 0) {
        printf("in the Second Quadrant.\n");
    }
    else if (x < 0 && y < 0) {
        printf("in the Third Quadrant.\n");
    }
    else if (x > 0 && y < 0) {
        printf("in the Fourth Quadrant.\n");
    }
    else if (x == 0 && y == 0) {
        printf("at the Origin (0,0).\n");
    }
    else if (x == 0) {
        printf("on the Y-axis.\n");
    }
    else if (y == 0) {
        printf("on the X-axis.\n");
    }
    else {
        printf("input ?\n");   
    }

    return 0;
}
