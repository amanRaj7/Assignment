#include <stdio.h>
#define ROW 100
#define COL 100

int main(){
    int matA[ROW][COL], matB[ROW][COL], matC[ROW][COL], r, c, i, j;
    printf("Enter row of matrix: ");
    scanf("%d", &r);
    printf("Enter col of matrix: ");
    scanf("%d", &c);
    printf("Enter the matrix A: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter a%d%d: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter Matrix B: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter b%d%d: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }
    printf("Matric C:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%3d", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
