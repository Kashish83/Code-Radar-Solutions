#include<stdio.h>
int main(){
    int N,i;
    
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N;i++){
        scanf("%d",&a[i]);
    }
    int largest=a[0];
    int second_largest= -1;
    for(int i=1; i<N; i++){
        if(a[i]>max){
           second_largest = largest;
           largest = a[i];
        }else if(arr[i]>second_largest && a[i] !=largest){
            second_largest = a[i];
        }
    }
    if(second_largest !=-1) {
        printf( second_largest);
    }else{
        printf("-1");
    }
  
    return 0;
}