#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter the item of array: ");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    int copy_n = n, copy_arr[copy_n];
    for(i=0; i<copy_n; i++) copy_arr[i] = arr[i];
    printf("Copied array: ");
    for(i=0; i<copy_n; i++) printf("%d ", copy_arr[i]);
    return 0;
}