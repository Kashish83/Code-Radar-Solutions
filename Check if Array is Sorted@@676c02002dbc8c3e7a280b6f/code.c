#include<stdio.h>
int main(){
    int N,a=0,b=0;
    scanf("%d",&N);
    int arr[N];
    for(int k=0;k<N;k++){
        scanf("%d",&arr[k]);
    }
    for(int i=0; i<=N; i++){
        if(arr[i]>arr[i+1]){
           a++;
        }
        else{
            b++;
        }
        
    }
    if(b>0 && a==0){
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
    return 0;
}