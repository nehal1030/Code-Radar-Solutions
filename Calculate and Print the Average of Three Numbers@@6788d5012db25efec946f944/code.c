#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    int sum = a + b + c;
    int average = sum / 3;
    printf("Average: %d\n" , average);
    return 0;
}