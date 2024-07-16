#include <stdio.h>
#define LEN 1000

int main(){
    int arr[LEN], n, i, min, max;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter the %d numbers: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    min = arr[0], max = arr[0];
    for(i=1; i<n; i++){
        min = (min>arr[i]) ? arr[i] : min;
        max = (max<arr[i]) ? arr[i] : max;
    }
    printf("Minimum element of the data: %d\nMaximum element of the data: %d\n", min, max);
    return 0;
}