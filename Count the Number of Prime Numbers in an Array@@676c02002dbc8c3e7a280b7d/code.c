#include<stdio.h>
int main(){
    int n, count = 0;
    
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int isPrime =1;
        if(arr[i]<2){
            isPrime=0;
        }else{
            for(int j=2; j<arr[i]; j++){
                if(arr[i]%j==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            count++;
            return count;
        }
        printf("%d",count);
        return 0;
    }
   
}