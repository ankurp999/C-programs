//wap to calculate sum of squares of first N natural numbers 
#include<stdio.h>
int main(){
int i,N,s=0,m;
printf("enter a number ");
scanf("%d",&N);
for(i=1;i<=2*N;i++){
    m=i*i;
    s=s+m;
}
printf("%d",s);
    return 0;
}