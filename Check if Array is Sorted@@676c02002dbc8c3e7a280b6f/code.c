#include<stdio.h>
int main(){
    int N,kG=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k=a[0];
    for(int j=1; j<N; j++){
        if(k>a[j]){
            g++;
        }
        else{
            k=a[j];
        }
    }
    if(g>0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}