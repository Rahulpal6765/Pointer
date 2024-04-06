// Write a program to print the address of variable. Use this address to print the value of this varible.

#include<stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    printf("The address of %d is %u\n", a, ptr);
    printf("The value of %d is %d\n", a, *ptr);
    
}