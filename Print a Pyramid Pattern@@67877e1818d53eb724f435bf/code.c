#include <stdio.h>
int main() {
    int N,i;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
       
    }
    for(int j=0; j<(2*i)-1; j++){
        printf("*");
    }
     printf("\n");
    return 0;
}