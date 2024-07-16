#include <stdio.h>

int Compute_GCD(int a, int b);

int main(){
    int num1, num2, gcd;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    gcd = Compute_GCD(num1, num2);
    printf("GCD: %d\n", gcd);
    return 0;
}

int Compute_GCD(int a, int b){
    if(a==0) return b;
    else return Compute_GCD(b%a, a);
}