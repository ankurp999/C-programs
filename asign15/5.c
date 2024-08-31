//write a function to print N prime number(TSRN)
#include<stdio.h>
void ass(int);
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    ass(x);
    return 0;
}
void ass(int a){
    int j,count=1;
    for(int i=2;1;i++){
        for( j=2;i>j;j++){
            if(i%j==0)
            break;
        }
        if(i==j){
            printf("  %d",i);
            count++;
        }
        if(count==a+1)
        break;
    }
}
