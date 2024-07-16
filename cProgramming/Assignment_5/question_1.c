#include <stdio.h>
#define LEN 50

void question_a();
void question_b();
void swap(int *a, int *b);
void question_c();
void question_d();
void question_e();

int main(){
    printf("(1) Compute Xn, where X is any valid number and n is an integer value.\n");
    printf("(2) Swap values of two integer variables.\n");
    printf("(3) Compute the GCD of two integers and return the result to the calling function.\n");
    printf("(4) Compute and returns the sum of n elements of an integer array.\n");
    printf("(5) Remove white spaces (blank spaces) from a string.\n");
    printf("Enter the question number: ");
    int q;
    scanf("%d", &q);
    switch(q){
        case 1:
            question_a();
            break;
        case 2:
            question_b();
            break;
        case 3:
            question_c();
            break;
        case 4:
            question_d();
            break;
        case 5:
            question_e();
            break;
        default:
            printf("Enter valid number\n");
            break;
    }
    
}

void question_a(){
    int x, n, pro[LEN] = {};
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    pro[0] = 1;
    int k=0, rem, i, j;
    for(j=0; j<n; j++){
        rem = 0;
        for(i=0; i<=k; i++){
            pro[i] = pro[i]*x + rem;
            rem = pro[i]/10;
            pro[i] = pro[i]%10;
            
        }
        while(rem>0){
            pro[i] = rem%10;
            rem = rem/10;
            i++;
            k++;
        }
    }
    for(i = k; i>=0; i--) printf("%d", pro[i]);
    
}
void question_b(){
    int a = 10, b = 20;
    printf("Before swap: \n");
    printf("a: %d\nb: %d\n", a, b);
    swap(&a, &b);
    printf("After swap: \n");
    printf("a: %d\nb: %d\n", a, b);
}
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

void question_c(){
    int a, b, fac; 
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    fac = gcd(a, b);
    printf("GCD: %d", fac);
}

int arrsum(int len, int arr[len]){
    int i = 0, sum = 0;
    for(i=0; i<len; i++) sum += arr[i];
    return sum;
}

void question_d(){
    int n, arr[LEN], i, sum;
    printf("Enter the lenght of array: ");
    scanf("%d", &n);
    printf("Enter the element of array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sum = arrsum(n, arr);
    printf("Sum: %d\n", sum);
}

void question_e(){
    char sen[50], nospace_str[50];
    gets(sen);
    printf("Enter the string: ");
    gets(sen);
    int i = 0, j = 0;
    while(sen[i]!='\0'){
        if(sen[i]!=' ') nospace_str[j++] = sen[i];
        i++;
    }
    nospace_str[j] = '\0';
    printf("String with no space: %s", nospace_str);
}