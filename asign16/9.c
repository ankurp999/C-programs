//write a function to print octal of a given number
#include<stdio.h>
int add (int);
int main (){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    add(n);
    return 0;
}
int add(int a){
    int b,c;
    if(a==0)
    return 1;
    b=add(a/8);
    c=b%8;
    printf("%d ",c);
    return a;
}