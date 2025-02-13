#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=N-k; j<N; j++){
        printf("%d \n",arr[j]);
    }
    for(int l=0; l<N-k; l++){
        printf("%d \n",arr[l]);
    }
    return 0;
}
