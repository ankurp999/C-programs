//factorial of a number.(TSRS)
#include<stdio.h>
int ass(int);
int main(){
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
    y=ass(x);
    printf("factorial of %d is %d",x,y);
}
int ass(int a){
    int i;
    for(i=1;a>1;a--){
        i=i*a;
    }
    
    return i;
}