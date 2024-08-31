#include<stdio.h>
int main(){
int a;
int sum,h;
sum=0;
printf("Enter a three digit number!");
scanf("%d",&a);
while(a>0){
h=a%10;
sum=sum+h;
a=a/10;
}
printf("The sum of the number is %d",sum);
    return 0;
}
// #include<stdio.h>
// int main(){
// char a;
// printf("tHIS IS A PROGRAM WHICH TELLS YOU THE ASCII CODE OF THE CHARECTER '+' /nENTER THE CODE!");
// scanf("%c",&a);
// printf("%d",a);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int r;
//     float a;
// char s;
// double h;
// printf("the size if any integer is =%d\nsize of any float is =%d\nsize of any charecter is=%d\nsize of any double is =%d",sizeof(r),sizeof(a),sizeof(s),sizeof(h));
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int a,b;
// printf("enter a number!");
// scanf("%d",&a);
// b=a/10;
// a=b*10;
// printf("the answer is=%d",a);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("enter a number ");
// scanf("%d",&a);
// printf("enter a digit!");
// scanf("%d",&b);
// a=a*10;
// c=a+b;
// printf("the answer is=%d",c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// double a,b;
// b=84.23;
// printf("enter amount in INR!");
// scanf("%lf",&a);
// a=a/b;
// printf("the amount in USD is =%lf",a);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int a,A,B,C;
// printf("enter a number!");
// scanf("%d",&a);
// A=a%100;
// B=a/100;
// C=(A*10)+B;
// printf("%d",C);
//   return 0;
// }
// #include<stdio.h>
// int main(){
// int x;
// x=3<0&&5>0;                 ;
// printf("%d",x);
//     return 0;
// }