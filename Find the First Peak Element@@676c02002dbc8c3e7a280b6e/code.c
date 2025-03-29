#include<stdio.h>
int main(){
    int N,i,g=0,c;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < N; i++) {
        if(i==0){
           a[i-1]=a[N-1];
        }
        if(i==N-1){
           a[i+1]=a[0];
        }
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            g++;
            c=a[i];
            break;
        }
        
       
    }

    
    if(g>0){
       printf("%d \n",c);
    }
    else{
       printf("-1");
    }
    
    return 0;

}   
