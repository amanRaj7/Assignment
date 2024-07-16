#include <stdio.h>

int main(){
    int n, i, f0 = 0, f1 = 1, j;
    printf("Enter the n: ");
    scanf("%d", &n);
    //printf("Enter the n: ");
    //scanf("%d", &n);
    switch(n){
        case 0:
            printf("0\n");
            break;
        case 1:
            printf("0 1\n");
            break;
        default:
            printf("0 1 ");
            for(i=2; i<=n; i++){
                j = f1;
                f1 = f0 + f1;
                f0 = j;
                printf("%d ", f1);
            }
            break;
    }
    
    /*
    int arr[100000];
    arr[0] = 0;
    arr[1] = 1;
    for(i=2; i<=n; i++) arr[i] = arr[i-1] + arr[i-2];
    for(i=0; i<=n; i++) printf("%d ", arr[i]);
    */
    return 0;
}
