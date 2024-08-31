//sum of squres of first n natural numbers
#include<stdio.h>
int add(int ,int);
int main(){
    printf("enter a number ");
    int N,M=1;
    scanf("%d",&N);
    printf("%d",add(M,N));
    return 0;
    }
    int add(int a,int b){
        if(a*a>b*b)
        return 0;
        return(a*a+add(a+1,b));
    }