#include<stdio.h>
#include<math.h>
void dowork(int a, int b, int *sum, int *product, int *average);

int main(){
    int a, b, sum, product, average;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    dowork(a, b, &sum, &product, &average);
    printf("sum = %d\nproduct = %d\naverage = %d\n", sum, product, average);

    return 0;
}
void dowork(int a, int b, int *sum, int *product, int *average){
     *sum = a+b;
     *product = a*b;
     *average = (a+b)/2;
}