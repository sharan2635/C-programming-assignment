/*
requirement:
    Merge two ascending sorted arrays into one sorted array without sorting.
design:
    a[], b[] - input arrays 
    merged[] - result 
    n, m - sizes 
    i, j, k - indices
output:
    Input: 1 3 5 and 2 4 6
    Output: 1 2 3 4 5 6
code:
*/
#include <stdio.h>
int main(void)
{
    int a[100], b[100], merged[200], n, m, i = 0, j = 0, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    if (n < 0 || n > 100) return 0;
    printf("Enter first sorted array: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &m);
    if (m < 0 || m > 100) return 0;
    printf("Enter second sorted array: ");
    for (i = 0; i < m; i++) scanf("%d", &b[i]);

    i = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < n) merged[k++] = a[i++];
    while (j < m) merged[k++] = b[j++];
    printf("Merged array: ");
    for (i = 0; i < k; i++) printf("%d ", merged[i]);
    printf("\\n");
    return 0;
}