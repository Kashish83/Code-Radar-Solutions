#include <stdio.h>
int main() {
    int N,i,j;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i+1; j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}