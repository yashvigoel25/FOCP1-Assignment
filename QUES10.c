/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int marks[50], n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("No student scored 99.\n");
    else
        printf("\nTotal students who scored 99: %d\n", count);

    return 0;
}
