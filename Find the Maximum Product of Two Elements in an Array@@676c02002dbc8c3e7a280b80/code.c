#include<stdio.h>
int main(){
    int N,g;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int max= a[0]*a[1];
    for(int i=1;i<N-1;i++){
        g=a[i]*a[i+1];
      if(g>max){
        max=g;
      }
    }
        
        printf("%d\n",max);
    
    return 0;

}