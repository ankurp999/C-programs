//write a function to check whethe a given number is even or odd.
//retun 1 if the number is even, return 0 if the number is odd.
#include<stdio.h>
int add(int);
int main(){
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
   y=add(x); 
    if(y)
    printf("even");
    else
    printf("odd");
}
int add(int a){
    if(a%2==0)
    return 1;
    else
    return 0;
}