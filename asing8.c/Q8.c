//wap to print squars of the first N natural numbers 
#include<stdio.h>
int main(){
int i=1,N;
printf("enter a number");
scanf("%d",&N);
while(i<=N){
printf("\n%d",i*i);
i++;
}
    return 0;
}