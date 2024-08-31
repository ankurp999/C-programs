//write a function to check whether a givin number contains a given digit or not(TSRS)
#include<stdio.h>
int ass(int,int);
int main(){
    int x,y;
printf("enter a number ");
scanf("%d",&x);
printf("enter a digit which you want to check in given number");
scanf("%d",&y);
int z;
z=ass(x,y);
if(z)
printf("the digit is present ");
else
printf("the digit is not present ");

    return 0;
}
int ass(int a,int b){
    
    for(int i;a>1;){
        i=a%10;
        a=a/10;
        if(i==b)
         return 1;
    }
    return 0;
}