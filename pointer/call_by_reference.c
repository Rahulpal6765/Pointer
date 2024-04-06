#include<stdio.h>
void swap(int *a, int *b);
void wrongswap(int a, int b);
int main(){
    int x, y;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Emter the second number : ");
    scanf("%d", &y);
    wrongswap(x, y);
    printf("x = %d and y = %d\n", x, y);
    printf("--------------------------------");
    swap(&x, &y);
    printf("x = %d and y = %d\n", x,y);

    return 0;
}
void wrongswap(int a, int b){
    int t = a;
    a=b;
    b=t;
    printf("After swaping\n a = %d and b = %d\n", a, b);

}
void swap(int *a, int *b){
    int t = *a;
    *a=*b;
    *b=t;
     printf("After swaping\n a = %d and b = %d\n", *a, *b);    
}