#include<stdio.h>
#include<string.h>
int count_vovels(char s[]){
    char cmp[5]="aeiou";
    int i,temp=0;
    for(i=0;s[i];i++){
        for(int j=0;j<=5;j++){
            if(s[i]==cmp[j]){
                temp++;
            }
        }
    }
    return temp;
}
int main(){
    int i;
    printf("enter 5 strings !!");
    char str[5][20];
    for (int i=0;i<5;i++){
        fgets(str[i],20,stdin);
    str[i][strlen(str[i])-1]='\0';
    }
    for(int i=0;i<5;i++){
        printf("\nVOVELS in %s are %d ",str[i],count_vovels(str[i]));
    }
    return 0;
}