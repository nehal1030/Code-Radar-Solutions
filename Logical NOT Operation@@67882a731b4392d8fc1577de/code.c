#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    
    printf("%s\n" , !(num > 0) ? "True" : "False");
    return 0;
}