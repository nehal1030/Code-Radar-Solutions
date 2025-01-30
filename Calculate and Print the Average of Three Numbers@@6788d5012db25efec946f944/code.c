#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    int sum = a + b + c;
    float average = sum / 3;
    printf("Average: %f\n" , average);
    return 0;
}