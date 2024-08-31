#include<stdio.h>
struct student
{
  char name[20];
  int rolle_number;
  int cls;
  char father_name[20];
  char mother_name[20];
  char gender[10]; 
};
void display(struct student b){
    printf("NAME-%s",b.name);
    printf("ROLLE NUMBER-%d",b.rolle_number);
    printf("CLASS-%d",b.cls);
    printf("FATHER NAME-%s",b.father_name);
    printf("MOTHER NAME-%s",b.mother_name);
    printf("GENDER-%s",b.gender);
}
struct student input(){
     struct student b;
    printf("enter student's name ");
    fgets(b.name,20,stdin);
    
    printf("enter student's rolle number ");
    scanf("%d",&b.rolle_number);
    fflush(stdin);
    printf("enter student's father name ");
    fgets(b.father_name,20,stdin);
    printf("enter student class");
    scanf("%d",b.cls);
    fflush(stdin);
    printf("enter student's mother name ");
    fgets(b.mother_name,20,stdin);
    printf("enter student's gender ");
    fgets(b.gender,20,stdin);
    return b;
}
int main(){
   struct student info[10];
   for(int i=0;i<10;i++){
    printf("student no- %d\n",i+1);
   info[i]=input();
   }
   for(int i=0;i<10;i++){
    printf("student no- %d\n",i+1);
   display(info[i]);
   }
   return 0;

}