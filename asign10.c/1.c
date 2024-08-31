// wap to find nth term of fibonacci series; 
// #include<stdio.h>
// int main(){
// float N;
// float a,b,f,g,s=1.618043,r=0.618043,F,D;
// printf("enter any number");
// scanf("%f",&N);
// for(a=2;a<N;a++){s=1.618043*s;}
// for(b=2;b<N;b++){r=0.618043*r;}
// F=(s-r);
// D=F/2.23606798;
// printf("value of the %.1fth term is=%.1f",N,D);
//     return 0;
// }
   

   // new method 

#include<stdio.h>
int main(){
double a=0,b=1,c,N;
printf("enter term which you want");
scanf("%lf",&N);
for(int i=1;i<(N-1);i++){
    c=a+b;
    a=b;
    b=c;
    printf("\n%lf",c);
}

    return 0;
}   