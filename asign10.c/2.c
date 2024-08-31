//wap to print n terms of the fibonacci series
 #include<stdio.h>
int main(){
double a=0,b=1,c,N;
printf("enter term which you want");
scanf("%lf",&N);
for(int i=1;i<(N-1);i++){
    c=a+b;
    a=b;
    b=c;
    printf("\n%.1lf",c);
}

    return 0;
}   