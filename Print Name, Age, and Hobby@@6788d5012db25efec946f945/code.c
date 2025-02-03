#include <stdio.h>
int main() {
    char str1[100],str2[100];
    int num;
    scanf("%s\n %s\n",&str1,&str2);
    scanf("%d\n",&num);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",num);
    printf("Hobby: %s\n",str2);
    return 0;
}