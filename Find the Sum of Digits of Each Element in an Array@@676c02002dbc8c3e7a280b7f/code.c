#include<stdio.h>
int main(){
    int N, i,dig,num;
    scanf("%d",&N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0; i<N; i++){
        num= a[i]%10;
        sum=sum+num;
        num/=10;

    }
    return sum;
    for(int i=0; i<N; i++){
        printf("%d"a[i],sum);
    }
    return 0;
    
}.