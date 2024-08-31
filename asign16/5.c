//write a function to print N even natural numbers 
#include<stdio.h>
int add(int);
int main(){
    int N;
    printf("enter a number");
    scanf("%d",&N);
    N=N+1;
    add(N);
    return 0;
}
int add(int a){
    int b;
    if(a==1)
    return 1;
    b=2*add(a-1);
    printf("%d  ",b);
    return a;
}