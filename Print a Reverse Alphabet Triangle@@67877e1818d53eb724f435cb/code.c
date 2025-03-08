#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    for (int i=1; i<=n ; i++){
        char ch='A';
        for(int j=1 ; j<=n ; j++){
            if(j>=i){
                printf("%c ",ch++);
            }
            // else{
            //     printf(" ");
            // }
        }
        printf("\n");
    }
}