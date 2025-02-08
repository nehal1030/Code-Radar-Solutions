#include <stdio.h>

int main() {
    int age , cs;
    scanf("%d %d" , &age , &cs);
    if ((age > 18) && (cs == 1)) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}