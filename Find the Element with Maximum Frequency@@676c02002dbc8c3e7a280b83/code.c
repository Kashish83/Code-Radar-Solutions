#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
   }
   int maxCount=0;
   int maxElement;
   for(int i=0; i<n; i++){
    int count=0;
    for(int j=0; j<n; j++){
        if(a[j]==a[i]){
            count++;
        }
    }
    if(count>maxCount){
        maxCount=count;
        maxElement=a[i];
    }
   }
   printf("%d\n",maxElement);
//    printf("%d\n",maxCount);
   return 0;
}
