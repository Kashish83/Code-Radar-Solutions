#include<stdio.h>
int main(){
    int flag=0,num;
    scanf("%d",&num);
    for(int i=2; i<=num; i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not Prime");
    }else{
        printf("Prime");
    }
}