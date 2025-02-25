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
        if(k<a[j]){
            max++;
        }else{
            min++;
        }
    }
    if(max>0){
        printf("%d",max);
    }else{
        printf("%d",min);
    }
   
    
    return 0;
    
}