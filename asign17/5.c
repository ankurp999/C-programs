//sum of the digits of the given number
#include<stdio.h>
int add(int );
int main(){
    printf("enter a number");
    int N;
    scanf("%d",&N);
    printf("%d",add(N));
    return 0;
}
int add(int a){
    if(a==0)
    return 0;
    return(a%10+add(a/10));
}