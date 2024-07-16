#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter the two numbers: ");
    scanf("%d%d", &x, &y);
    while(x!=0){
        z = x;
        x = y%x;
        y = z;
    }
    printf("GCD of given number is %d\n",y);
    return 0;
}