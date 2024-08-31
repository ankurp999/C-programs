#include<stdio.h>
int main()
{
 int i,j;
 for(i=1;i<=5;i++)
 {
    int a=1;
    for(int k=i;k<5;k++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        if(j%2==0)
        printf(" ");
        else
        printf("%d",a++);
        if(i==j)
        break;
    }
    int y=a-1;
    for(int l=1;l<i;l++)
    {if(i%2){
        if(l%2)
        printf(" ");
        else
        printf("%d",--y);}
        else{
            if(l%2==0)
        printf(" ");
        else
        printf("%d",y--);
        }
    }
    printf("\n");
 }
 return 0;
 }