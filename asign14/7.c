// write a program to calculate the number of combinations 
//one can make from n items and r selected at a time.
#include<stdio.h>
float ass(float,float);
int main(){
    float x,y;
    float z;
    printf("enter total numbers ");
    scanf("%f",&x);
    printf("enter the slections");
    scanf("%f",&y);
    z=ass(x,y);
    printf("total numbers of combinations are %.2f",z);
    return 0;
}
float ass(float a,float b){
    float i,j;
    for( i=1,j=1;a>1&&b>=1;a--,b--){
        i=i*a;
        j=j*b;
    }
    float c;
    c=i/j;
    return c;

}