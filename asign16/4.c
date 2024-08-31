// write a function to print first N odd natural numbers in reverse order 
#include<stdio.h>
int N;
int add(int);
int main (){
    
    printf("enter a value");
    scanf("%d",&N);
    N=2*N+1;
    add(N);
    return 0;
}
int add(int a){
    int b;
    if(a==1)
    return 1;
    b=N-(2*add(a-1));
    if(b>0)
    printf("%d  ",b);
    return a;
}