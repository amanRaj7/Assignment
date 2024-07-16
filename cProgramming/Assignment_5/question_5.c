#include <stdio.h>
#define ROW 50
#define COL 50

void max_arr(int r, int c, int arr[r][c]);

int main(){
    int i, j, arr[ROW][COL], row, col;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &col);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    max_arr(row, col, arr);
    return 0;
}

void max_arr(int r, int c, int arr[ROW][COL]){
    int i, j, mrow[r], mcol[c];
    printf("Given array: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++) printf("%3d", arr[i][j]);
        printf("\n");
    }
    for(i=0; i<r; i++){
        mrow[i] = arr[i][0];
        for(j=0; j<c; j++){
            if(mrow[i]<arr[i][j]) mrow[i] = arr[i][j];
        }
    }

    for(j=0; j<c; j++){
        mcol[j] = arr[0][j];
        for(i=0; i<r; i++){
            if(mcol[j]<arr[i][j]) mcol[j] = arr[i][j];
        }
    }

    printf("Maximum element in row: \n");
    for(i=0; i<r; i++) printf("Row %d: %d\n", i+1, mrow[i]);
    printf("Maximum element in column: \n");
    for(j=0; j<c; j++) printf("Col %d: %d\n", j+1, mcol[j]);
}