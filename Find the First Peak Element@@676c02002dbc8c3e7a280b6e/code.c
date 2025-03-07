#include<stdio.h>
int main(){
    int N,j,i,g=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    for(int j=1; j<a[i]; j++){
        if(a[i]>a[i-1]){
            if(a[i]>a[i+1]){
                g++;
            }
        }else{
            g--;
        }
    }
    if(g>0){
       printf("%d \n",arr[i]);
    }else{
        return -1;
    }
    return 0;

}