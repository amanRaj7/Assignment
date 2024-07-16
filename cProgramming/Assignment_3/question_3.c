#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n], i, j, c, flag;
    printf("Enter the element of array: ");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    for(i=0; i<n-1; i++){
        flag = 0;
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    
    
    return 0;
}