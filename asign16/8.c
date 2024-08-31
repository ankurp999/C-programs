//write a function to print binary of a given decimal number
#include<stdio.h>
int add(int);
int main(){
    int n;
    printf("enter a numer");
    scanf("%d",&n);
    n=2*n;
    add(n);
    return 0;
}
int add(int a){
    int b;
    if(a==1)
    return 1;
    b=add(a/2);
    printf("%d ",b);
    if(a%2)
    return 1;
    else
    return 0;
}