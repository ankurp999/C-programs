//write a function to print sum of first N natural numbers
#include<stdio.h>
int add(int,int);
int main(){
    printf("enter a number");
    int N,M=0;
    scanf("%d",&N);
   printf(" %d",add(M,2*N));
    return 0;
}
int add(int a,int b){
    if(a>=b)
    return 0;
    return(a+add(a+2,b));
}