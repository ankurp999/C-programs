// first N odd natural numbers (TSRN)
#include<stdio.h>
void add(int);
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    add(x);
}
void add(int a){
int i=1;
while(i<2*a){
    printf("\n%d",i);
     i=i+2;
}
}