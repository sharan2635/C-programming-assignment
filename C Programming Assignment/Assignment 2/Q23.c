/*
requirement:
    Rotate an array left or right by n positions, including n larger than array size.
design:
    arr[] - input 
    temp[] - rotated array 
    size - array length 
    n - rotation count
    direction - L or R 
    i - loop counter
output:
    Input: array=1 2 3 4 5, n=2, direction=R
    Output: 4 5 1 2 3
code:
*/
#include <stdio.h>
int main(void)
{
    int arr[100], temp[100], size, n, i;
    char direction;
    printf("Enter array size: ");
    scanf("%d", &size);
    if (size < 1 || size > 100) return 0;
    printf("Enter elements: ");
    for (i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Enter positions to rotate and direction (L/R): ");
    scanf("%d %c", &n, &direction);
    n %= size;
    for (i = 0; i < size; i++) {
        if (direction == 'L' || direction == 'l')
            temp[i] = arr[(i + n) % size];
        else if (direction == 'R' || direction == 'r')
            temp[(i + n) % size] = arr[i];
        else {
            printf("Invalid direction.\\n");
            return 0;
        }
    }
    printf("Rotated array: ");
    for (i = 0; i < size; i++) printf("%d ", temp[i]);
    printf("\\n");
    return 0;
}