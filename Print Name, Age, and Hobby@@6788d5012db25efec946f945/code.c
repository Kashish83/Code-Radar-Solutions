#include <stdio.h>
int main() {
    char str1[100],str2[100];
    int num;
    scanf("%s %s",&str1,&str2);
    scanf("%d",&num);
    printf("Name: %s",str1);
    printf("Age: %d",num);
    printf("Hobby: %s",str2);
    return 0;
}