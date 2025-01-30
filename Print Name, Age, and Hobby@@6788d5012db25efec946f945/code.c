#include <stdio.h>

int main() {
    char str name[100] , hobby[100];
    int age; 
    scanf("%s" , &name);
    scanf("%d" , &age);
    scanf("%s" , &hobby);
    printf("Name: %s\n" , name);
    printf("Age: %d\n" , age);
    printf("Hobby: %s\n" , hobby);
    return 0;
}