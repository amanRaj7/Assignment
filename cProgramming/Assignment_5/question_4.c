#include <stdio.h>
#define ROW 50
#define COL 50

int max_arr(int r, int c, int arr[r][c]);

int main(){
    int row, col, arr[ROW][COL], i, j, max;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &col);
    printf("Enter the elment of array (%d X %d):\n", row, col);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++) scanf("%d", &arr[i][j]);
    }
    max = max_arr(row, col, arr);
    printf("Maximum element of array: %d\n", max);
}

int max_arr(int r, int c, int arr[r][c]){
    int i, j, max;
    max = arr[0][0];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    return max;
}