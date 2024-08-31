#include<stdio.h>
int main(){
    int x;
    printf("enter your percentage");
    scanf("%d",&x);
    switch(x){
        case 91 ... 100:
        printf("grade A");
        break;
        case 81 ... 90:
        printf("grade B");
        break;
        case 71 ... 80:
        printf("grade C");
        break;
        case 61 ... 70:
        printf("grade D");
        break;
        case 51 ... 60:
        printf("grade E");
        break;
        case 1 ... 50:
        printf("grade F");
        break;
        default :
        printf("invalid ");


    }

    return 0;
}