#include<stdio.h>
int main(){
    int N,j,i;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    if(N==1){
        printf("%d\n",a[0]);
        return 0;
    }if(a[0]>a[1]){
        printf("%d\n",a[0]);
        return 0;
    }
    for (int i = 1; i < N - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            printf("%d\n", a[i]);
        }
    }

    
    if(a[N-1]>a[N-2]){
       printf("%d \n",a[N-1]);
    }
    return 0;

}   
