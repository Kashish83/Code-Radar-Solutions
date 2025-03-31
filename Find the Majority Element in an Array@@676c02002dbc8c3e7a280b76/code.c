#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int majority=n/2;
    for(int i=0;i<n; i++){
        int count=0; 
        for(int j=0; j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
    }
        if (count > majority_count) {
            printf("The majority element is: %d\n", arr[i]);
            
        }else{
             // If no majority element found
         printf("-1");
        }
        return 0;
    }

    
