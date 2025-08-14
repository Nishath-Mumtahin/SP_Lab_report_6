#include <stdio.h>
int main()
{
    int arr[100], n, i, Sum = 0;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        Sum += arr[i];
    }

    printf("Sum of all elements stored in the array is : %d\n", Sum);

    return 0;
}
