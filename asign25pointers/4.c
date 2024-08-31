#include<stdio.h>
#include<string.h>
void lowercase(char *p)
{
    for(int i=0 ;*(p+i);i++){
        if(*(p+i)>='A'&& *(p+i)<='Z')
        {
            *(p+i)=*(p+i)+32;
        }
    }
}
int main(){
    char str[30];
    printf("enter a string");
    fgets(str,30,stdin);
    lowercase(str);
    printf("%s",str);
}