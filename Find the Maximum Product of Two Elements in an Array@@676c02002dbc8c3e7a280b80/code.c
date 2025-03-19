#include<stdio.h>
int main(){
    int N,g,max=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++){
        g=a[i]*a[i+1];
        max==g;
    
        
        printf("%d",max);
        return max;
    }
   
    return 0;

}