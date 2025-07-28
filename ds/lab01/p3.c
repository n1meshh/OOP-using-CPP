#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of elements in Set A: ");
    scanf("%d", &m);

    int A[m];
    printf("Enter elements of Set A:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number of elements in Set B: ");
    scanf("%d", &n);

    int B[n];
    printf("Enter elements of Set B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    printf("\nThe Cartesian Product A × B is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d)", A[i], B[j]);
            if (!(i == m - 1 && j == n - 1)) {
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}
