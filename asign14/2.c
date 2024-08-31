 // simple inrest
 #include<stdio.h>
 float add(float,float,float);
 int main(){
    float x,y,z,ans;
    printf("enter principle amount ,year and intrest rate ");
    scanf("%f%f%f",&x,&y,&z);
    ans=add(x,y,z);
    printf("the simple inrest is %.2f",ans);
    return 0;
 }
 float add(float a,float b,float d){
    float c;
    c=(a*b*d)/100;
    return c;
 }