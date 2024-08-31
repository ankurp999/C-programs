// wap to print all armstrong number under 1000;
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c , d, i, j, e, k;
    for (i = 1; i <= 1000; i++)
    {
        c=0;
        a = i;
        d = a;
        e = a;
        for (j = 1; j < 4; j++)
        {
            a = a / 10;
            if (a == 0)
                break;
        }
        while(d)
        {
            b=d%10;
            c+=pow(b,j);
            d/=10;
        }
        
        if(e==c){
            printf("%d ", c);
        }

    }
    return 0;
}
