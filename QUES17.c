/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main() {
int arr[50];
int n, i, pos, choice;
printf("Enter number of elements in the array: ");
scanf("%d", &n);

printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("\nArray before deletion:\n");
for(i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}

printf("\n\nWhere do you want to delete the element?\n");
printf("1. From the beginning\n");
printf("2. From the middle\n");
printf("3. From the end\n");
printf("Enter your choice (1-3): ");
scanf("%d", &choice);


if(choice == 1)
    pos = 0;          
else if(choice == 2)
    pos = n / 2;      
else if(choice == 3)
    pos = n - 1;      
else {
    printf("Invalid choice!\n");
    return 0;
}


for(i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
}
n--; 

printf("\nArray after deletion:\n");
for(i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}

printf("\n");
return 0;
}