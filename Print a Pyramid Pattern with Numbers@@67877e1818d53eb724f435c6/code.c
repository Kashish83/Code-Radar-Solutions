#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=0; j<N-i; j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}