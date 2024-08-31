//wap to calculate sum of first N natural numbers 
#include<stdio.h>
int main(){
int i=1,N,s=0;
printf("enter a number ");
scanf("%d",&N);
while(i<=N){s+=i;i++;}
printf("%d",s);return 0;
}