#include<stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Add the last digit
        num /= 10;         // Remove the last digit
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);  // Input the size of the array

    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);  // Input array elements
    }

    // For each element in the array, calculate the sum of its digits
    for (int i = 0; i < N; i++) {
        int sum = sum_of_digits(a[i]);
        printf("%d ", sum);
    }

    return 0;
}
