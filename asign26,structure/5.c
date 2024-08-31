#include<stdio.h>
struct emp {
    int id;
    char name[20];
    float salary;
};
void display(struct emp b){
     printf("id-%d\n",b.id);
     printf("name-%s",b.name);
     printf("%f\n\n",b.salary);
}
struct emp input(){
    struct emp b;
    printf("enter employee details as id,name and salary");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,20,stdin);
    scanf("%f",&b.salary);
    return b;
}
int main(){
    struct emp arr[10];
    for(int i=0;i<10;i++)
    arr[i]=input();
    for(int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j].salary>arr[j+1].salary){
                struct emp temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        display(arr[i]);
    }

}