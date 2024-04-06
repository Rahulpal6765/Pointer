// Try problem 3 by using call by value and verify that it does not change the value of the said variable.

#include<stdio.h>
void value(int n){
    printf("The value of n is %d\n", n*10);
}
int main(){
    int i = 8;
    value(i);
    printf("The value of i is %d\n", i);
return 0;
}