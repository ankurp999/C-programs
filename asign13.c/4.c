#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
    int x,a,b,c;
    printf("\n\n\n\n1. check whether a given set of three numbers are lengths of an isosceles triangl or not .\n2. check whether a given set of the numbers are lengths of sides of rightangle triangle or not.\n3. check whether a given set of the numbers are equiletral trangle or not.\n4. exit");
    printf("\nchose any option !");
    scanf("%d",&x);
    switch(x){
        case 1:
    
                printf("enter the numbers ");
        scanf("%d\n%d\n%d",&a,&b,&c);
        if((a+b)>c&&(b+c)>a&&(c+a)>b){
        if(a==b||c==b||c==a)
        printf("it is a set of three numbers which is isosceles triangle ");
        else
        printf("it is  not a set of isosceles triangle ");
        }
        else
        printf("invalid number !");
        break;

        case 3:
        printf("enter three numbers ");
        scanf("%d\n%d\n%d",&a,&b,&c);
        if(a=(b&&c))
        printf("equiletral traingle");
        else 
        printf("is not a equiletral traingle ");
        break;

        case 2:
        printf("enter three numbers ");
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>c||(a+c)>b||(b+c)>a){
        if(a*a==(b*b+c*c)||b*b==(a*a+c*c)||c*c==(a*a+b*b))
        printf("is a right angle traingle ");
        else
        printf("is not a right angled triangle");
        }
        else
        printf("invalid number !");
        break;
        case 4:
        exit(0);
        default :
        printf("invalid choice ");

    }
    }
}