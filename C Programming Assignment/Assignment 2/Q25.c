/*
requirement:
    Print all pairs of different array positions whose values add to the target.
design:
    arr[] - input array 
    n - size 
    target - required sum 
    i, j - pair indices 
    found - flag
output:
    Input: array=1 4 2 3, target=5
    Output: (1, 4), (2, 3)
code:
*/
#include <stdio.h>
int main(void)
{
    int arr[100], n, target, i, j, found = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found) printf("No matching pairs found.\\n");
    return 0;
}