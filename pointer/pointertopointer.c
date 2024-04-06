//print the value of 'i' from its pointer to pointer

#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    // int i=5;
    // int *ptr = &i;
    // int **pptr=&ptr;
    // printf("%d\n", **pptr);
    int a=5;
    
    square(a);
   
    printf("the number is %d\n", a);
     _square(&a);
    printf("the number is %d\n", a);

}
void square(int n){
    printf("square = %d\n", n*n);
}
void _square(int *n){
    *n = (*n) * (*n);
    printf("%d\n", *n);
}