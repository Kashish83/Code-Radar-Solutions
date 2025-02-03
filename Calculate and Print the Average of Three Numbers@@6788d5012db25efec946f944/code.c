#include <stdio.h>
int main() {
    int num1,num2,num3,Average;
    scanf("%d %d %d",&num1, &num2, &num3);
    Average=num1+num2+num3/3;
    printf("Average: %.2d\n",Average);
    return 0;
}