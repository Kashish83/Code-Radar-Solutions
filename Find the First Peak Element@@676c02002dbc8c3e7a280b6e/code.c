#include<stdio.h>
int main(){
    int N,j,i,g=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    if(N==1){
        printf("%d\n",a[0]);
    }if(a[0]>a[1]){
        printf("%d\n",a[0]);
    }
    for(int j=1; j<a[i]; j++){
        if(a[i]>a[i-1]){
            if(a[i]>a[i+1]){
                printf("%d\n",a[i]);
            }
        
    }
    if(a[N-1]>a[N-2]){
       printf("%d \n",a[N-1]);
    }
    return 0;

    }
}