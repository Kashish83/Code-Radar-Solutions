#include <stdio.h>
int main() {
    int N,i,j;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        printf("\n");
    }
    for(int j=0; j<(2*i-1); j++){
        printf("*");
    }
    return 0;
}