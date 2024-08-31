#include<stdio.h>
int main(){
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("swapped value %d %d",a,b);
}