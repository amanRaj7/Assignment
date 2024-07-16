#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    int arr[len], i, search;
    printf("Enter the element of array: ");
    for(i=0; i<len; i++) scanf("%d", &arr[i]);
    printf("Enter the search item: ");
    scanf("%d", &search);
    for(i=0; i<len; i++){
        if(arr[i]==search){
            printf("Index: %d", i);
            return 0;
        }
    }
    printf("%d is not in array\n", search);
    return 0;
}