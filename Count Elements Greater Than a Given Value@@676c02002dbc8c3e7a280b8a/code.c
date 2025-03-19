#include<stdio.h>
int main(){
    int N,k,count=0;
    scanf("%d",&N);
    scanf(" %d",&k);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<N; i++){
        if(k<a[i]){
            count++;
            
        }
        
    }
    printf("%d\n",count);
    
    return 0;
}