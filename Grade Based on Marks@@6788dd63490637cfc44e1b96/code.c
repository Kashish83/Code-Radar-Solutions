#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("A %d",marks);
    }else if(80=<marks<90){
        printf("B %d",marks);
    }else if(70=<marks<80){
        printf("C %d",marks);
    }else if (60=<marks<70){
        printf("D %d",marks);

    }else{
        printf("F %d",marks);
    }
    return 0;
}