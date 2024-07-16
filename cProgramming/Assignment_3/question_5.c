#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int m = n;
    int binary[100], i = 0;
    while(m!=0){
        binary[i] = m%2;
        m /= 2;
        i++;
    }
    printf("Binary equivalent of %d: ", n);
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
    
    return 0;
}