#include <stdio.h>

int main() {
    int t;
    scanf("%d" , &t);
    if (t <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }
    return 0;
}