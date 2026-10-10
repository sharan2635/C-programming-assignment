/*
requirement:
    Find the second largest element in an integer array without sorting.
design:
    arr[] - stores array elements
    n - array size
    i - loop counter
    largest - largest value 
    second - second largest value
output:
    Example: 
    Input array: 10 5 8 20 15
    Second largest element = 15
code:
*/

#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int second = arr[1];
    int i;

    if (second > largest) {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int main(void)
{
    int arr[100], n, i;

    printf("Enter array size (at least 2): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Second largest element = %d\\n", secondLargest(arr, n));
    return 0;
}