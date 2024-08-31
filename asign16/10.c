//write a recursive function to print the reverse of a given number
#include<stdio.h>
void add(int);
int main(){
    int N;
    printf("enter a value ");
    scanf("%d",&N);
    add(N);
    return 0;
}
void add(int a){
    printf("%d ",a%10);
    if(a<=9)
    return ;
 add(a/10);
}