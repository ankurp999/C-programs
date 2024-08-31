// //wap to calculate HCF of two numbers
// #include<stdio.h>
// int main(){
// int i,N,M,D;
// printf("enter any two number");
// scanf("%d%d",&N,&M);
// for(i=1;i<N*M;i++){
// if(i%N==0&&i%M==0)
// break;}
// D=N*M/i;
// printf("HCF=%d",D);
//     return 0;
// }
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
printf("HCF=%d",i);
    return 0;
}