#include<stdio.h>
int main(){
    int N,i,g=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    int key=a[0];
    for(int i=1; i=<N; i++){
        if(a[i]==key){
            g++;
        }else{
            key++;
        }
        printf("%d %d",N, g);
    }
    
    return 0;
}