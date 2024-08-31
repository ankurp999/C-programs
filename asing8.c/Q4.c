//wap to print first N odd natural numbers 
#include<stdio.h>
int main(){
int i=1,N;
printf("enter a number ");
scanf("%d",&N);
while(i<=N){
    printf("\n%d",i);
    i=i+2;
}
    return 0;
}