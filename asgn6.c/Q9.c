// wap which takes the lenght of the sides of a triangle as an input display whether the triangle is valid or not.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the sides of the triangles ");
scanf("%d%d%d",&a,&b,&c);
((a+b)>c||(b+c)>a||(c+a)>b)?printf("tringle is valid"):printf("invalid");
    return 0;
}