//question--1 calculate the size of character constant

// #include<stdio.h>
// int main()
// {
// char a;
// printf("Enter a charecter!");
// scanf("%c",&a);
// printf("size of the charecter %d",sizeof(a));
//     return 0;
//}

//question--2 calculate the size of real constant


// #include<stdio.h>
// int main()
// {
//     double a;
// printf("Enter a real number!");
// scanf("%f",&a);
// printf("size of the charecter %d",sizeof(a));
//     return 0;
// }

//question--3 WAP with one char type variable assign'A'in the variable.
//now change the value of variable from 'A' to 'B' using increment operator.

// #include<stdio.h>
// int main()
// {
//     char x,y;
// x='A';

// printf("%c",++x);

//     return 0;
// }


// just to practice the question 


// #include<stdio.h>
// int main()
// {
// int x;
// x=65|76;
// printf("%d",x);
//     return 0;
// }
 

 //question-4-- WAP to print unit digit of a given number.


//  #include<stdio.h>
//  int main()
//  {
//     int a;
// printf("Enter a number!");
// scanf("%d",&a);
// printf("%d",a%10);
//     return 0;
//  }

//question-5-- WAP to print the given number without it's last digit.


// #include<stdio.h>
// int main(){
// int a;
// printf("Enter a number!");
// scanf("%d",&a);
// printf("%d",a/10);
//     return 0;
// }


//question-6-- WAP to swap values of two variables.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers!");
//     scanf("%d%d",&a,&b);
//     printf("%d %d",b,a);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a,b;
// printf("Enter two numbers!");
// scanf("%d %d",&a,&b);
// printf("%d %d",(a+b-a),(a-b+b));
//     return 0;
//}
// #include<stdio.h>
// int main()
// {
// int a,b,c;
// printf("Enter two numbers!");
// scanf("%d %d",&a,&b);
// c=a;
// a=b;
// b=c;
// printf("%d %d",a,b);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// float a,b;
// printf("Enter two numbers ");
// scanf("%f %f",&a,&b);h
// a=a+b;
// b=a-b;
// a=a-b;
// printf("the swaped value of the numbers is %.2f %.2f",a,b);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int a,b;
// printf("Enter two numbers ");
// scanf("%d %d",&a,&b);
// a=a*b;
// b=a/b;
// a=a/b;
// printf("the swaped value of the given numbes are %d %d",a,b);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
// int a,b;
// printf("enter two numbers!");
// scanf("%d%d",&a,&b);
// a=a^b;
// b=a^b;
// a=a^b;
// printf("%d %d",a,b);
//     return 0;
// }
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=(a+b)-(b=a);
    printf("swapped values are %d %d",a,b);
    return 0;
}