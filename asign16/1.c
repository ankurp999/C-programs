//write a recursive function to print first N natural numbers.
#include<stdio.h>
int add();
int main(){
    int N;
    printf("enter a number");
    scanf("%d",&N);
     add(N);
    return 0;
}
int add(int a){
    int b;
    if(a<1)
    return 0;
    b= add(a-1);
     printf(" %d ",b);
     return a;
}