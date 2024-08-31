//write a function to check whether a given number is prime or not (TSRS)
#include<stdio.h>
int ass(int);
int next_prime_number(int);
void n_prime(int);
int main(){
int x,y;
printf("enter a number");
scanf("%d",&x);
y=ass(x);
if(y==0)
printf("it is a prime number");
else
printf("not a prime number");
printf("\nthe next prime number is %d",next_prime_number(x));
n_prime(x);
    return 0;
}
int ass(int a){
    for(int i=2;a>i;i++){
        if(a%i==0)
        return 1;
    }
    return 0;
}
int next_prime_number(int a)
{
    while(ass(++a));
    return a;
}
void n_prime(int n)
{
    int s=2;
    while(n){
        if(!ass(s)){
            printf("\n%d",s);
            n--;
        }
        s++;
    }
}