#include <stdio.h>

int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[100], n;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The maximum element is: %d\n", getMax(arr, n));

    return 0;
}
