#include<stdio.h>
int main(){
    int N,i;
    
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1; i<N; i++){
        if(a[i]>max){
            if(a[i+1]>a[i]){
                max=a[i+1];
            }
        }
    }
    printf("%d",max);
    return 0;
}