#include<stdio.h>
int product2(int matrix1[3][3], int matrix2[3][3], int i, int j)
{
    int result = 0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (i + x < 3 && j + y < 3 && x < 3 - i && y < 3 - j) {
                result += matrix1[i + x][j + y] * matrix2[x][y];
            }
        }
    }
    return result;
}

void product_of_matrix(int matrix1[3][3],int matrix2[3][3],int matrix3[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix3[i][j]=product2(matrix1,matrix2,i,j);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matrix1[3][3]={{1,2,3},{4,8,6},{7,8,9}},matrix2[3][3]={{0,9,8},{7,6,5},{4,3,2}};
    int matrix3[3][3];
    product_of_matrix(matrix1,matrix2,matrix3);
    return 0;
}