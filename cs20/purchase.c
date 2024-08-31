#include<stdio.h>
int main(){
    int dis=0,quan;
    float price,total;
    printf("Enter the quantity and price of the item :) \n");
    scanf("%d %f",&quan,&price);

    if(quan>1000)
    dis = 0.1 * price * quan;
    total = price* quan - dis ;
    printf("Total expense is %.2f", total);
    return 0;

}