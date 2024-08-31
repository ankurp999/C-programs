#include<stdio.h>
#include<string.h>
void capital(char s[]){
    int ary[10],k=0,i;
    ary[0]=0;
    for( i=0;s[i];i++){
        if(s[i]==32)
        ary[++k]=i;
    }
    printf("%c ",s[0]);
    for(int j=1;j<k;j++){
        printf("%c",s[ary[j]+1]);
    }
    for(int j=ary[k]+1;s[j];j++){
        printf("%c",s[j]);
    }

}
int main (){
    printf("enter a string !!");
    char str[20];
    gets(str);
    capital(str);
}