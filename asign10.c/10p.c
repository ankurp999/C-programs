#include<stdio.h>
#include<math.h>
int main(){
    int a,b,j,d,n,c,sum;
    for(int i=1;i<1000;i++){

            a=i;
            b=i;
            sum=0;
            n=0;
       while(a){
        a=a/10;
        n++;
       }
        while(b){
            c=b%10;
            sum+=pow(c,n);
            b=b/10;
        }
        if(i==sum)
        printf("%d ",i);
    }
    return 0;
}