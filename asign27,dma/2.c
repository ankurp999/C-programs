#include<stdio.h>
#include<stdlib.h>
void avarage(int *p,int a)
{
    float avr;
    int sum=0,i=0;
    while(i<a){
        sum=sum + (*(p+i));
        i++;
    }
    avr=sum/a;
    printf("the avarage is: %f",avr);
    
}
void display(int *p,int a){
    int i=0;
    while(i<a){
        printf("%d ",*(p+i));
        i++;
    }
}
int input(int *p,int a,int b)
{
   
    scanf("%d",p+b);
    if(b==(a-1))
    return 0;
    input(p,a,++b);
}
int main(){
    int a,b=0;
    printf("enter how many data values you want to enter: ");
    scanf("%d",&a);
    int *p;
    p=(int*)malloc(a*sizeof(int));
     printf("enter the %d datas",a);
    input(p,a,b);
    display(p,a);
    avarage(p,a);
    free(p);
}