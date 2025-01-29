#include <stdio.h>

int main() {
    int arr[6] = {5, 3, 7, 1, 9, 8};
    int target;
    int found = -1;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
