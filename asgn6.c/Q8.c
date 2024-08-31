//wap to check whether a given charecter is an alphabet(uppercase)
//,an alphabet(lowercase),a digit or a special character.
// #include<stdio.h>
// int main(){
// char sd;
// printf("enter a character");
// scanf("%c",&sd);
// if(sd>=97&&sd<=122)
// printf("a lowercase alphabet");
// else if(sd>=65&&sd<=90)
// printf("uppercase alphabet");
// else if(sd>=48&&sd<=57)
// printf("digit");
// else
// printf("special character");
//     return 0;
// }
#include<stdio.h>
int main(){
char X;
printf("enter a character ");
scanf("%c",&X);
if(X>='a'&&X<='z')
{
    printf("lower case");

}
else if(X>='A'&&X<='Z'){
    printf("upper case");
}
else{
    printf("not a alphabate");
} 
    return 0;
}