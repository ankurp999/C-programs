// wap to calculate the factorial of a number
#include <stdio.h>
int main()
{
    int i, N,s=1;
    printf("enter a number");
    scanf("%d", &N);
    for (i = N; i > 0; i--)
    {
    s=s*i;}
    printf("%d",s);
    return 0;
}