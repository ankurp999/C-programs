//HCF OF TWO NUMBERS 
#include<stdio.h>
int add(int a,int b,int c){
    
    if(a%c==0&&b%c==0)
    return c;
    if(c==a*b)
    return 1;
    if(c<a*b)
    return(add(a,b,c+1));
}
int main(){
    int N,M;
    int c=2;
    printf("enter two number");
    scanf("%d%d",&N,&M);
    printf("HCF= %d",add(M,N,c));
}
