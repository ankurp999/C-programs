#include<stdio.h>
int main(){
char var;
printf("enter any character");
scanf("%c",&var);
switch(var){
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':

    printf("it is a vowel");
    break;
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
    printf("it is consonent");
    break;
    default :
    printf(" some special charecter");
}

    return 0;
}