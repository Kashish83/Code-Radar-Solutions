#include <stdio.h>
int main() {
    int N,i,j;
   scanf("%d",&num);
   for(int i=1; i<=N; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
   }
   
    return 0;
}