#include<stdio.h>
int fibonacciSeries(int n){
 if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
    
    
int main(){
    int n;
    scanf("%d",&n);
   

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }else{
        for(int i=0; i<n; i++){
    printf("%d",fibonacciSeries(n));
        }
        printf("\n");
    }
    return 0;
}
