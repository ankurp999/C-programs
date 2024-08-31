//write a function to find the sum of first N terms of the series 1!/1+2!/2+
//3!/3+4!/4+.....(TSRS)
#include<stdio.h>
float add(int);
int main(){
    int N;
    float y;
    printf("enter a number");
    scanf("%d",&N);
    y=add(N);
    printf("the sum of %d turm of the series 1!/1+2!/2+3!/3+4!/4+..... is %f",N,y);
return 0;
}
float add(int a){
    int i,b=1,c;
    float d,e=0;
    for(i=1;a>=i;i++){
        for(int j=1;i>=1;j++){
            c=i%10;
            b=b*c;
            c=c/10;
            if(c==0)
            break;
        }
      d=b/i;
      e=e+d;
    
    }
    return e;
}