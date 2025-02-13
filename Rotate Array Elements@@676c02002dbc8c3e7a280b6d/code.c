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
    for(int k=N-k; k<N; k++){
        printf("%d \n",arr[k]);
    }
    for(int l=0; l<N-k; l++){
        printf("%d \n",arr[l]);
    }
    return 0;
}
