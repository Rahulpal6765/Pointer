#include<stdio.h>
int main(){
    // int *ptr;
    // int x;

    // ptr = &x;
    // *ptr = 0;

    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    // *ptr += 5;
    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);

    //  (*ptr)++;
    // printf("x = %d\n", x);
    // printf("*ptr = %d\n", *ptr);
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f, %f, %f\n", price, *ptr, **pptr);
}