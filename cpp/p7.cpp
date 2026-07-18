#include <stdio.h>

int main() {
    int arr[2][2][2];
    int i, j, k;

    // Input elements
    printf("Enter 8 elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Display elements
    printf("\nElements of the 3D array are:\n");
    for (i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}