#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        for(int j=0;j<=N; j++)
        {
         if(i==0 || i==N || j==0 || j==N){
            printf("* ");
         }
         
        }
        printf("\n");
    }
    
    return 0;
}