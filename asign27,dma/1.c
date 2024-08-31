#include<stdio.h>
#include<stdlib.h>
void input(char *p,int a){
    printf("enter string: ");
    fflush(stdin);
      fgets(p,a,stdin);
      printf("end");
}
int main(){
    int a;
    printf("enter the length of strings");
    scanf("%d",&a);
    char *p;
    p=(char*)malloc(a*sizeof(int));
    if(p==NULL){
    printf("memory allocatin failed ");
    return 0;
    }
    input(p,a);
    free(p);
    return 0;
}
