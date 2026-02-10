#include <stdio.h>
int main() {
    int n, pos, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    printf("Updated array is:\n");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

