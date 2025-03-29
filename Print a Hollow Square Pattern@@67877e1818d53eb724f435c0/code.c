#include<stdio.h>
int main(){
    for(int i=1; i<N; i++){
        for(int j=1;j<=N; j++)
        {
         if(i==0 || i==N || j==0 || j==N){
            printf("*");
         }
        }
    }
    printf("\n");
    return 0;
}