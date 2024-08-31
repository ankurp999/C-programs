//wap to check whether a given number is divisible by 7 0r divisible by 3.
#include<stdio.h>
int main(){
int a;
printf("enter a numer");
scanf("%d",&a);
(a%7==0||a%3==0)?printf("devisible by 7 or 3"):printf("not divisible by 7 or 3");
    return 0;
}