#include <stdio.h>
int main() {
    int CP, SP;
    scanf("%d %d",&CP,&SP);
    if(SP>CP){
        printf("Profit");
    }else{
        printf("Loss");
    }
    
    return 0;
}