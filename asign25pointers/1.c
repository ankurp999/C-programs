#include<stdio.h>
void swap(int *p,int *q)
{
    int c;
    c=*q;
    *q=*p;
    *p=c;
}
int main()
{
    int a=3,b=4;
    swap(&a,&b);
    printf("%d %d",a,b);
}