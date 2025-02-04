#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a , &b);

    int result = (!(a>0)) && (!(b>0))
    
    printf(result ? "True\n" : "False\n");
    return 0;
}