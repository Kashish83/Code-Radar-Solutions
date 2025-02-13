#include<stdio.h>
int main(){
    int N,a=0,b=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        if(arr[i]>=arr[i+1]){
           a++;
           break;
        }
        else {
            b++;
        }
    }
    if(a>0){
        printf("Sorted");
    }
     else if(b>0){
        printf("Not Sorted");
    }
    return 0;
}