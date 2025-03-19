#include<stdio.h>
int main(){
    int N,K,i;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&K);
    for(int i=0;i<N;i++){
    if(K==a[i]){
        return i;
    }else{
        return -1;
    }
    }
    printf("%d",a[i]);
    return 0;
    

}