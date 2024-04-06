#include<stdio.h>
#include<math.h>

float swap(float a, float b);
float _swap(float *a, float *b);
int main(){
    float x, y;
    printf("Enter first number : ");
    scanf("%f", &x);
    printf("Enter second number : ");
    scanf("%f", &y);
   swap(x, y); // call by value
   printf("Before swaping : %f and %f\n", x, y);
   _swap(&x, &y); // call by reference
   printf("Before swaping : %f and %f\n", x, y);


    

    return 0;
}
float swap(float a, float b){
    float temp = a;
    a = b;
    b = temp;
    printf("After swaping %f and %f", a, b);
}
float _swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
    printf("After swaping %f and %f", *a, *b);
}