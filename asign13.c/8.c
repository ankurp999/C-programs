//write a program to check whether a given character is uppercase or lower case or some other special charecter
//using switch case statement.
#include<stdio.h>
int main(){
char var;
printf("enter any character");
scanf("%c",&var);
switch(var){
    case 'a' ... 'z':
    printf("it is a lowercase charecter");
    break;
    case 'A' ... 'Z':
    printf("it is uppercase charecter");
    break;
    default :
    printf(" some special charecter");
}

    return 0;
}