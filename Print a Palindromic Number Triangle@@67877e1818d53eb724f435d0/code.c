#include<stdio.h>
int main(){
    int N,i,j,k;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(intj=1; j<=N-i; j++){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}