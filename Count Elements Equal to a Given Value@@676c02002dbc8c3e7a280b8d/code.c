#include<stdio.h>
int main(){
    int N,K,count=0;
    scanf("%d",&N);
    scanf("%d",&K);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N; i++){
        if(K==a[i]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}