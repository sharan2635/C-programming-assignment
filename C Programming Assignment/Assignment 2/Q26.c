/*
requirement:
    Move negative numbers before non-negative numbers while preserving each group's order.
design:
    arr[] - input array 
    temp[] - reordered values 
    n - size 
    i, k - counters
output:
    Input: 3 -2 0 -5 4
    Output: -2 -5 3 0 4
code:
*/
#include <stdio.h>
int main(void)
{
    int arr[100], temp[100], n, i, k = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
        if (arr[i] < 0) temp[k++] = arr[i];
    for (i = 0; i < n; i++)
        if (arr[i] >= 0) temp[k++] = arr[i];
    printf("Rearranged array: ");
    for (i = 0; i < n; i++) printf("%d ", temp[i]);
    printf("\\n");
    return 0;
}