#include<stdio.h>
int main(){
    int N,k;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k=a[0];
    for(int j=1; j<a[i]; j++){
        if(a[i]>a[i+1]){
            j++;
            k++;
        }
        else{
            j--;
        }
    }
    if(a>0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}