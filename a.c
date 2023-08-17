// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[50], i, j, n, temp;
    printf("Enter the number of elements for the array:\n");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
    //make some changes 
