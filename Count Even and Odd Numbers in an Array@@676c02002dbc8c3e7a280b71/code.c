#include<stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<a[N];i++){
        scanf("%d",&a[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<N; i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("%d",even);
    printf(" %d",odd);
    
    

}