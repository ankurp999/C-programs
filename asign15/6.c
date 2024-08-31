//write a function to print all prime numbers between two given numbers (TSRN)
#include<stdio.h>
void ass(int,int);
int main(){
    int x,y;
    printf("enter one number ");
    scanf("%d",&x);
    printf("enter bigger number ");
    scanf("%d",&y);
    ass(x,y);
    return 0;
}
void ass(int a, int b){
    int j;
    for(int i=a+1;i<b;i++){
     for( j=2;i>j;j++){
        if(i%j==0)
        break;
     }
     if(i==j) 
     printf(" %d",i); 
        
}}