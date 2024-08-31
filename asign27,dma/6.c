#include<stdio.h>
#include<stdlib.h>
struct student{
    int r;
    char name[20];
    char cllgname[30];   
};
struct team{
    struct student s1,s2;
};
struct student* values(struct student *p){
    
    printf("enter student rolle number: ");
    scanf("%d",(p+i)->r);
    fflush(stdin);
    printf("enter student name: ");
    fgets((p+i)->name,20,stdin);
    printf("enter student college name: ");
    fgets((p+i)->cllgname,30,stdin);
    return p;
}
int main(){
    int n;
    printf("enter student number");
    scanf("%d",&n);
   struct student *p,*q;
   p=(struct student*)malloc(n*sizeof(struct student));
   q=values(p,n);


}
