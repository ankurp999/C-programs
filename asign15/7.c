//write a programe to print first N terms of armstrong series(TSRN)
#include<stdio.h>
#include<math.h>
void add(int);
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    add(x);
    return 0;
}
void add(int z){
    int a, b, c , d, i, j, e, k,count=1;
    for (i = 1; 1; i++)
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
            count++;
        }
        if(count==z)
        break;

    }
}
