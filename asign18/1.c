//write a program to calculate the sum of numbers stored in an array of size 10.
//take array values from the user.
#include<stdio.h>
int main(){
    int a[10],sum=0;
    printf("enter 10 numbers!");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++){
        sum=sum+a[i];
    }
    printf("the sum is = %d",sum);
}