// write a program to sort an array (tsrn)
#include <stdio.h>
int sorting(int arry[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                int y = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = y;
            }
        }
    }
    printf("the sorted array is ...");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("\n%d", arry[i]);
    }
}
int main()
{
    int n;
    printf("enter the array size !!");
    scanf("%d", &n);
    int arry[n];
    printf("enter %d numbers", n);
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arry[i]);
    }
    sorting(arry, n);
}