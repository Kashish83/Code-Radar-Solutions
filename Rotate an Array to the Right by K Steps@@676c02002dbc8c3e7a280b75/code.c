#include <stdio.h>

int main() {
    int n, k;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of rotations
    
    scanf("%d", &k);

    // Normalize k to avoid unnecessary rotations
    k = k % n;

    // Right rotate the array by k steps
    for (int step = 0; step < k; step++) {
        // Store the last element
        int last = arr[n - 1];

        // Shift all elements to the right by one position
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Place the last element at the first position
        arr[0] = last;
    }

    // Print the rotated array
   ;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
