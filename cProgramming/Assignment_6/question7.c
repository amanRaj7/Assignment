#include <stdio.h>

typedef struct{
    int re;
    int im;
}complex;

void print_complex(complex com);

int main(){
    complex com1, com2, sum, diff, pro;
    printf("Enter first complex number: ");
    scanf("%d+i%d", &com1.re, &com1.im);
    printf("Enter second complex number: ");
    scanf("%d+i%d", &com2.re, &com2.im);
    sum.re = com1.re + com2.re, sum.im = com1.im + com2.im;
    diff.re = com1.re - com2.re, diff.im = com1.im - com2.im;
    pro.re = (com1.re*com2.re) - (com1.im * com2.im), pro.im = com1.re*com2.im + com2.re * com1.im;
    printf("Sum of complex number: ");
    print_complex(sum);
    printf("Difference of complex number: ");
    print_complex(diff);
    printf("Product of complex number: ");
    print_complex(pro);
    return 0;
}

void print_complex(complex com){
    printf("%d+i%d\n", com.re, com.im);
}