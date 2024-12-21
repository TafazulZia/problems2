#include <stdio.h>
int main() {
    int arr[10], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
