// wap to calculate the sum of first N odd natural numbers
#include<stdio.h>
int main(){
int i,N,s=0;
printf("enter a number");
scanf("%d",&N);
for(i=1;i<=2*N;i++){
    if(i%2){
        s=s+i;
    }
}
printf("%d",s);
    return 0;
}