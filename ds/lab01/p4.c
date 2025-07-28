#include <stdio.h>
#define N 10  // Size of the universal set (0 to 9)

// Read a set from user and store in bit string
void readSet(int bitSet[]) {
    int n, elem;
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter elements (from 0 to %d):\n", N - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (elem >= 0 && elem < N)
            bitSet[elem] = 1;
        else
            printf("Element %d is out of bounds, skipped.\n", elem);
    }
}

// Print set from bit string
void printSet(int bitSet[]) {
    printf("{ ");
    for (int i = 0; i < N; i++) {
        if (bitSet[i] == 1)
            printf("%d ", i);
    }
    printf("}\n");
}

int main() {
    int A[N] = {0}, B[N] = {0};
    int Union[N] = {0}, Intersection[N] = {0};

    // Read sets A and B
    printf("Enter Set A:\n");
    readSet(A);
    printf("Enter Set B:\n");
    readSet(B);

    // Calculate Union and Intersection
    for (int i = 0; i < N; i++) {
        Union[i] = A[i] | B[i];         // Bitwise OR
        Intersection[i] = A[i] & B[i];  // Bitwise AND
    }

    // Print results
    printf("\nSet A: ");
    printSet(A);

    printf("Set B: ");
    printSet(B);

    printf("Union (A ∪ B): ");
    printSet(Union);

    printf("Intersection (A ∩ B): ");
    printSet(Intersection);

    return 0;
}
