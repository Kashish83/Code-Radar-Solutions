#include <stdio.h>
int main() {
    int x, y,s;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(z=='+'){
        s=x+y;
        printf("%d",s)
    }else if(z=='-'){
        s=x-y;
        printf("%d",s);
    }else if(z=='/' && y!=0){
        s=x/y;
        printf("%d",s);
    }else if(z=='/' && y==0){
        printf("error");
    }else{
        s=x*y;
        printf("%d",s);
    }
    
    return 0;
}