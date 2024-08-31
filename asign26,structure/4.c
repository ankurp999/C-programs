#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    float money;
};
struct emp input(){
    struct emp b;
    printf("enter amployee's id,name and salary :");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,20,stdin);
    scanf("%f",&b.money);
    return (b);
}
int main(){
    struct emp arr[10];
    for(int i=0;i<10;i++)
    arr[i]=input();
    float m;
    for(int i=0;i<10;i++){
        if(m<arr[i].money){
            m=arr[i].money;
        } 
    }
 printf("the highest salary is %f",m);
}