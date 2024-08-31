#include<stdio.h>
#include<string.h>
struct emp {
    int id;
    char name[20];
    float salary;
};
struct emp input(){
    struct emp b;
    printf("enter employee's id ,name and salary");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,20,stdin);
    scanf("%f",&b.salary);
    return b;
}
void display(struct emp b){
    printf("ID-%d\n",b.id);
    printf("name-%s",b.name);
    printf("%f\n\n",b.salary);
}
int main(){
    struct emp arr[5];
    for(int i=0;i<5;i++)
    arr[i]=input();
    
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            if(0<strcmp(arr[j].name,arr[j+1].name)){
                struct emp temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<5;i++)
    display(arr[i]);

}
