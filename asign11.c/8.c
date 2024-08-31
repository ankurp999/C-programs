#include<stdio.h>
int main(){
int i,j,g=1;
for(i=1;i<=5;i++){
    printf("\n");
    for(j=1;j<=5;j++){
if(j<(0+i))
printf("%d",g++);
else
printf(" ");
    }
}

    return 0;
}