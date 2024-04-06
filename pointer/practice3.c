//Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference

#include<stdio.h>
void value(int *a);
int main(){
    int i = 4;
    value(&i);
}
void value(int *a){
    printf("the new value of i is %d\n", (*a)*10);
}