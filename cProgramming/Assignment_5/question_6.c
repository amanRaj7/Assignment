#include <stdio.h>

int reverseInteger(int n);

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int reversenum = reverseInteger(num);
    printf("Reverse Integer: %d", reversenum);
    return 0;
}

int reverseInteger(int n){
    int reverse = 0;
    while(n!=0){
        reverse = 10 * reverse + (n%10);
        n = n/10;
    }
    return reverse;
}