#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int a[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int maxFreq = 0, maxElement;

    // Count frequency of each element
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        // Update max frequency element
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = a[i];
        }
    }

    // Print the element with the maximum frequency
    printf("%d\n", maxElement);

    return 0;
}
