#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=0; j<=N-i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i)-1; k++){
            printf("*");
            }
    }
    printf("\n"); 

    for(int i=N-1; i>=1; i--){
        for(int j=1; j<=N-i; j++){
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; j++){
            printf("*");
            }
    }
     printf("\n");

    return 0;
}