/*
requirement:
    Find the second distinct largest and second distinct smallest values without sorting.
design:
    arr[] - array 
    n - size 
    i - counter 
    min1, min2 - smallest values
    max1, max2 - largest values 
    hasMin2, hasMax2 - flags
output:
    Input: 4 1 7 2 7 9
    Output: Second smallest = 2; Second largest = 7
code:
*/
#include <stdio.h>
int main(void)
{
    int arr[100], n, i;
    int min1, min2, max1, max2, hasMin2 = 0, hasMax2 = 0;
    printf("Enter array size (at least 2): ");
    scanf("%d", &n);
    if (n < 2 || n > 100) return 0;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    min1 = max1 = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min1) min1 = arr[i];
        if (arr[i] > max1) max1 = arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > min1 && (!hasMin2 || arr[i] < min2)) {
            min2 = arr[i]; hasMin2 = 1;
        }
        if (arr[i] < max1 && (!hasMax2 || arr[i] > max2)) {
            max2 = arr[i]; hasMax2 = 1;
        }
    }
    if (hasMin2) printf("Second smallest = %d\\n", min2);
    else printf("No second distinct smallest element.\\n");
    if (hasMax2) printf("Second largest = %d\\n", max2);
    else printf("No second distinct largest element.\\n");
    return 0;
}