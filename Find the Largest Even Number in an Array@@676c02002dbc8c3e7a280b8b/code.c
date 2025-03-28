 #include<stdio.h>
 int main(){
 int N,k,g=-1;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++){
    if(a[i]%2==0){
        if(g==-1||a[i]>g){
            g=a[i];
        }

    }
    }
    if(g==-1){
        printf("-1");
    }else{
        printf("%d\n",g);
    }
 }