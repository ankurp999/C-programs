#include<stdio.h>
#include<string.h>
void uppercase(char *p)
{
    for(int i=0 ;*(p+i);i++){
        if(*(p+i)>='a'&& *(p+i)<='z')
        {
            *(p+i)=*(p+i)-32;
        }
    }
}
int main(){
    char str[30];
    printf("enter a string");
    fgets(str,30,stdin);
    uppercase(str);
    printf("%s",str);
}