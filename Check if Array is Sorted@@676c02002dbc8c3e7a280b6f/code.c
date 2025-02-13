#include<stdio.h>
int main(){
    int N,a,b;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        if(N>=N-1){
           a++;
        }
        else{
            b++;
        }
    }
    if(a>0){
        printf("Sorted");
    }
     else if(b>0){
        printf("Not Sorted");
    }
}