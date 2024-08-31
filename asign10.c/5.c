#include<stdio.h>
int main(){
int a,b,c,i,j;
printf("enter any two numbers");
scanf("%d%d",&a,&b);
for(i=a;i>0;i--){
    if(a%i==0){
        for(j=b;j>0;j--){
            c=b%j;
            if(c==0){
                if(i==j)
                break;
            }
        }
    }if(i==j)
    break;
}
if(i==1)
printf("are co prime ");
else
printf("not a co prime ");
return 0;

}