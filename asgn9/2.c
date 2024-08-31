// wap to calculate sum of first N even natural numbers.
#include <stdio.h>
int main()
{
    int i, N, s = 0;
    printf("enter a numbers ");
    scanf("%d", &N);
    for(i=1;i<=2*N;i++){
        if(i%2==0){
        s=s+i;}
    }
printf("%d",s);
    return 0;
}