#include<stdio.h>
void addmatrix(int (&matrix1)[3][3],int (&matrix2)[3][3],int (&matrix3)[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
int main(){
    int matrix1[3][3]={{1,2,3},{4,8,6},{7,8,9}},matrix2[3][3]={{0,9,8},{7,6,5},{4,3,2}};
    int matrix3[3][3];
    addmatrix(matrix1,matrix2,matrix3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}