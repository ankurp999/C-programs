//wap to calculate sum cube of first N natural numbers
#include<stdio.h>
int main(){
int i,N,s=0,c;
  printf("enter a number ");
  scanf("%d",&N);
  for(i=1;i<=2*N;i++){
    c=i*i*i;
    s=s+c;
  }
  printf("%d",s);
    return 0;
}