#include<stdio.h>
int main(){
    int N,i,g;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    int key=a[0];
    for(int i=0; i<N; i++){
        if(a[i]==key){
            g++;
        }else{
            key++;
        }
    }
    return 0;
}