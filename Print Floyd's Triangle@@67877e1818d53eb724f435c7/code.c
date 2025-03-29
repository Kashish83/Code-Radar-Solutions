#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=i+1; j<i+2;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}