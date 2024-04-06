// W A P using a function which calculate sum and average of two number. Use pointers and print the value of sum and average in main()
#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
    
}
int main(){
    int x = 5, y = 8;
    int sum;
    float avg;
    sumAndAvg(x,y,&sum,&avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %f\n", avg);
return 0;
}