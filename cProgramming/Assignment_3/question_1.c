#include <stdio.h>

int main(){
    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    int arr[len], i;
    printf("Enter the element of array: ");
    for(i = 0; i<len; i++) scanf("%d", &arr[i]);
    int min, max,sum_odd = 0, rev_arr[len], j = len-1;
    float average = 0;
    for(i=0; i<len; i++){
        if(i==0){
            min = arr[i];
            max = arr[i];
        }
        else{
            if(max<arr[i]) max = arr[i];
            if(min>arr[i]) min = arr[i];
        }
        if(arr[i]%2==1) sum_odd += arr[i];
        average += arr[i];
        rev_arr[j--] = arr[i];
    }
    average /= len;
    printf("a. Maximum value of array: %d\n", max);
    printf("b. Minimum value of array: %d\n", min);
    printf("c. Average value of array: %f\n", average);
    printf("d. Sum of odd numbers from the array: %d\n", sum_odd);
    printf("e. Reverse array: ");
    for(i=0; i<len; i++) printf("%d ", rev_arr[i]);

    return 0;
}