//write a program to check whether a number is a three digit number or not.
#include<stdio.h>
int main(){
    int a;
printf("enter a number");
scanf("%d",&a);
if(a>=100&&a<1000)
printf("three digit number");
else
printf("not a three digit number");
    return 0;
}