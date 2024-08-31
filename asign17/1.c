// write a recursive function to calculate sum of first N natural numbers 
#include<stdio.h>
int add(int );
int main(){
    int N,M;
    printf("enter a number");
    scanf("%d",&N);
    M=add(N-1);
    printf("%d",M);
    return 0;
}
int add(int a ){
    int b;
    if(a==0)
    return 0;
    b=a+add(a-1);
    return b;
}