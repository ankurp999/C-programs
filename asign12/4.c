#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (int k = i; k < 4; k++)
        {
            printf(" ");
        }
        int x = 1;
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("%d", x++);
            if (x == i)
                break;
        }
        if (i > 1)
        {
            int y = i;
            for (int l = 1; l <= (i); l++)
            {
                printf("%d", y--);
            }
        }

        printf("\n");
    }
    return 0;
}