// write a function to print all prime factors of a given number (TSRN)
#include<stdio.h>
void ass(int);
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    ass(x);
    return 0;
}
void ass(int a){
    int i,j;
    for(int i=2;i<1000;i++){
        for ( j=2;j<i;j++){
            if(i%j==0)
            break;
       }
    if(i==j){
        while(1){
            int f;
            f=a%i;
        if(f==0)
        printf(" %d",i);
        else
        break;
        a=a/i;
    }}
        
    }
}