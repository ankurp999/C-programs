//wap to check whether the given character is uppercase or lowercase
#include<stdio.h>
int main(){
char a;
printf("enter a alphabet");
scanf("%c",&a);
if(a>=97&&a<=122)
printf("it is a lower case alphabet");
if(a>=65&&a<=96)
printf("it is a uppercase alphabet");
    return 0;
}