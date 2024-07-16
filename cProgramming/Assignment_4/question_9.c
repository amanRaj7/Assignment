#include <stdio.h>
#define ROW 100
#define COL 100

int main(){
    int matA[ROW][COL], n, i, j, sym_check = 1, lowtri_check = 1, dia_check = 1, trace1 = 0, trace2 = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter n x n matrix: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((i!=j)&&(matA[i][j] != matA[j][i])){
                sym_check = 0;
            }
            if((i<j)&&(matA[i][j]!=0)){
                lowtri_check = 0;
            }
            if(i==j){
                if(matA[i][j]!=0) dia_check = 0;
                trace1 += matA[i][j];
            }
            if(i==((n-1)-j)){
                trace2 += matA[i][j];
            }
        }
    }
    if(sym_check == 1) printf("Given matrix is symmetric matrix.\n");
    else printf("Given matrix is not symmetric matrix.\n");

    if(lowtri_check==1) printf("Given matrix is lower triangular.\n");
    else printf("Given matrix is not lower triangular.\n");

    if(dia_check==1) printf("Given matrix is diagonal matrix.\n");
    else printf("Given matrix is not diagonal triangular.\n");

    printf("sum of diagonals 1: %d\n", trace1);
    printf("sum of another diagoanal 2: %d\n", trace2);
    return 0;
}