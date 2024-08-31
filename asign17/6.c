//factorial of a given number
#include<stdio.h>
int add(int a){
    if(a==0)
    return 1;
    return(a*add(a-1));
}
int main(){
    printf("enetr a number");
    int N;
    scanf("%d",&N);
    printf("%d",add(N));
}