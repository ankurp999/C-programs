// print first N natural numbers (TSRN)
#include<stdio.h>
void add(int);
int main(){
    int x;
printf("enter a number");
scanf("%d",&x);
add(x);
    return 0;
}
void add(int a){
    int i=1;
    while(a){
        printf("\n%d",i++);
        if(i>a)
        break;
    } 
}