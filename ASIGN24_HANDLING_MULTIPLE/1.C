#include<stdio.h>
#include<string.h>
int main(){
    char str[3][10];
    printf("enter thre name !");
    for(int i=0;i<=2;i++){
        fgets(str[i],10,stdin);
    }
    int j=0;
    while( j<=2){
        printf("%s",str[j]);
        j++;
    }
}