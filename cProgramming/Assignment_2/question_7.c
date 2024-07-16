#include <stdio.h>

int main(){
    int i = 20, j = 30, ans = 0;
    for(; i<=j; i++){
        if((i%2==0)&&(i%3==0)) ans += i;
    }
    printf("Sum: %d", ans);
    return 0;
}
