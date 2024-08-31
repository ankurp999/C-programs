#include <stdio.h>
int main()
{
    int i, j, m = 4;
    for (i = 1; i <= 4; i++)
    {
        char c = 'A';
        int x = 1;
        for (int k = i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * 4 - i); j++)
        {
            if(i==4)
            x--;
            x++;
            printf("%c", c++);
            
            if (x == m)
            {
                m--;
                break;
            }
        }
        if(i<4){
        for (int l = 0; l <= (4 - i); l++)
        {
            printf("%c", c--);
        }}
        printf("\n");
    }
    return 0;
}