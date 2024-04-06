// Write a program having variable i. Print the address of i, pass this variable to a function and print the its address. are the address same? why?
#include<stdio.h>
void address(int n);
int main(){
    int i = 6;
    int *ptr = &i;
    printf("The address of variable i is %u\n", ptr);
    address(i);
}
void address(int n){
    printf("The address of variable i is %u\n", &n);
}