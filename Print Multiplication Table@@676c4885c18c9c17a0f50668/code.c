#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= 10; i++){
        printf("%dX%d= %d",N,i,N*i);
        printf("\n");
    }
    

    return 0;
}