#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=4;i++){
    for(int k=i;k>1;k--)
    printf(" ");
for(j=1;j<=(2*4-(2*i-1));j++){
        printf("*");
}
printf("\n");
}
    return 0;
}