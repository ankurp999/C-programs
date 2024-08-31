//waf to calculate LCM of two numbers .(TSRS)
#include<stdio.h>
int ass(int,int);
int main(){
    int x,y;
    printf("enter two numbers ");
    scanf("%d%d",&x,&y);
    int z;
    z=ass(x,y);
    printf("the LCM is=%d",z);
    return 0;
} 
int ass(int a,int b){
    int f;
    f=a*b;
    for(int i=f-1;i>1;i--){
        if(i%a==0&&i%b==0)
        return i;
    }
    return f; 

}