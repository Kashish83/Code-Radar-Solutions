#include<stdio.h>
int main(){
    int N,max=0,min=0,j;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<a[N];i++){
        scanf("%d",&a[i]);
    }
    int k=a[0];
    for(int j=0; j<N; j++){
        if(k<a[i]){
            max++;
        }else{
            min++;
        }
    }
    printf("%d",min);
    printf("%d",max);
    return 0;
    
}