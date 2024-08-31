#include<stdio.h>
int main(){
int a;
printf("enter any year");
scanf("%d",&a);
if(a%4==0 && (a%100!=0 || a%400==0))
printf("leap year ");
else
printf("normal year");
    return 0;
}