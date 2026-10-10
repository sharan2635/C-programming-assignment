/*
requirement:
    Remove duplicate values so that each value appears once.
design:
    arr[] - input array 
    n - size 
    i, j, k - loop counters
output:
    Input: 1 2 2 3 1
    Output: 1 2 3
code:
*/
#include <stdio.h>
int main(void)
{
    int arr[100], n, i, j, k;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) arr[k] = arr[k + 1];
                n--;
            } else j++;
        }
    }
    printf("Array without duplicates: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\\n");
    return 0;
}