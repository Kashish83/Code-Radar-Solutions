#include<stdio.h>
int main(){
    int N,key,count=0;
    
    scanf("%d",&N);
    scanf(" %d",&key);
    int a[N];
    for(int i=0; i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<N; i++){
        if(key==a[i]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}