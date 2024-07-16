#include <stdio.h>

int main(){
    int x, y;
    printf("Enter the base and power: ");
    scanf("%d%d", &x, &y);
    int ans = 1;
    for(int i=0; i<y; i++){
        ans *= x;
    }
    printf("%d\n", ans);
    return 0;
}