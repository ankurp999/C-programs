//write a menu driven by the following program.
//1.factorial of a number.
//2.check even or odd
//3.area of circle
//4.sum of N natural number
//5.exit 
#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
    int x,num,i;
    printf("\n\n\n1.factorial of a number.\n 2.check even or odd\n3.area of circle\n4.sum of N natural number\n5.exit ");
    printf("\n\nchose one option");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("enter a number");
        scanf("%d",&num);
        for( i=1;num>0;num--){
            i=i*num;
        }
        printf("factorial of the number is %d",i);
        break;
        case 2:
        printf("enter a number");
        scanf("%d",&num);
        if(num%2)
        printf("oDD");
        else
        printf("even");
        break;
        case 3:
        printf("enter the radius of the circle");
        scanf("%d",&num);
        printf("the area of the circle is %0.2f",3.14*num*num);
        break;
        case 4:
        printf("enter a number");
        scanf("%d",&num);
        for(i=0;num>0;num--){
            i=i+num;
        }
        printf("%d",i);
        break;
        case 5:
        exit(0);
    }}

    return 0;
}