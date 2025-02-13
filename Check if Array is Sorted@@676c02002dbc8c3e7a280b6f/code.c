#include<stdio.h>
int main(){
    int N,a=0,b=0,d=0;
    scanf("%d",&N);
    int arr[N];
    for(int k=0;k<N;k++){
        scanf("%d",&arr[k]);
    }
    for(int i=0; i<N; i++){
        if(arr[i]>arr[i+1]){
           a++;
        }
        else if(arr[i]==arr[i+1]){
            d++;
        }
        else{
            b++;
        }
        
    }
    if((b>0 && a==0 )||(d==N-1)){
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
    return 0;
}