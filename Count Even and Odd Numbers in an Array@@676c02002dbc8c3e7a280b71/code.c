#include<stdio.h>
int main(){
    int N,max=0,min=0,j;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<a[N];i++){
        scanf("%d",&a[i]);
    }
    int even=0;
    int odd=0;
    for(j=0;j<N; j++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("%d",even);
    printf("%d",odd);

}