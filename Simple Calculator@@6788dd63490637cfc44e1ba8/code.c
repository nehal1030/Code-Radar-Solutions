#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d %d %c" , &a , &b ,&ch);
    if (ch == '+') {
        printf("%d\n" , a+b);
    }
    else if (ch == '-') {
        printf("%d\n" , a-b);
    } 
    else if (ch == '*') {
        printf("%d\n" , a*b);
    } 
    else if (ch == '/') {
        if (b==0) {
            printf("error\n");
        } else {
            printf("%d\n" , a/b);
        }
    } 
    else {
        printf("error\n");
    }
    return 0;
}