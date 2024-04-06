// Write a program to print the value of a variable i by using pointer to pointer type of variable.
#include<stdio.h>
int main (){
    int i = 5;
    int *ptr= &i;
    int **pptr = &ptr;
    printf("The value of a variable i is %d\n", **pptr);
    return 0;
}