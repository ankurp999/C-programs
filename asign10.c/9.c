// Wap to check whether a given number is armstrong number or not;
#include <stdio.h>
#include <math.h>
int main()
{
    int a, N, j, f,i,b;
    float sum = 0;
    printf("Enter a number ->");
    scanf("%d", &N);
    a = N;
    b = a;
    j = N;
    for (i = 1; i < 10; i++)
    {
        N = N / 10;
        if (N == 0)
            break;
    }
    while (a)
    {
        f = a % 10;
        sum = sum + pow(f, i);
        a = a / 10;
    }
    if (sum == j)
        printf("[ The number is Armstrong number. ]");
    else
        printf("[ Not an Armstrong number. ]");
    return 0;
}