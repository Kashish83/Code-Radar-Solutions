#include<stdio.h>
int main(){
    int N,j,i;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    for(int j=0; j<a[i]; j++){
        if(a[i]>a[i-1]){
            if(a[i]>a[i+1]){
                print("%d",a[i]);
            }
        }
    }
    return 0;

}