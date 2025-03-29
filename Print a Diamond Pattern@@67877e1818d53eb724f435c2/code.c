#include<stdio.h>
int main(){
    int N,i;
    for(int i=1; i<=N; i++){
        for(int j=0; j<=N-i; j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i)-1; k++){
            for(int j=N; j>1;j--){
            printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}