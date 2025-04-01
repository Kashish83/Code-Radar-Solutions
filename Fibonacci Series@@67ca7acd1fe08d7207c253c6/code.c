#include<stdio.h>
int fibonacci series(int n)
 if(n==0){
            return 0;
        }
        if(n==1){
            return 0;
        }
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);

    
    
int main(){
    int n;
    scanf("%d",&n);
   

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }else{
    printf("%d",fibonacciSeries(n));
    }
    return 0;
}
