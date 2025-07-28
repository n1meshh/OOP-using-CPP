#include <stdio.h>

// Function to check if an element is present in a set
int isElementInSet(int elem, int set[], int size) {
    for (int i = 0; i < size; i++) {
        if (set[i] == elem)
            return 1;
    }
    return 0;
}

// Union of two sets
void unionSet(int A[], int n, int B[], int m) {
    printf("Union (A ∪ B): ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    for (int i = 0; i < m; i++) {
        if (!isElementInSet(B[i], A, n))
            printf("%d ", B[i]);
    }
    printf("\n");
}

// Intersection of two sets
void intersectionSet(int A[], int n, int B[], int m) {
    printf("Intersection (A ∩ B): ");
    for (int i = 0; i < n; i++) {
        if (isElementInSet(A[i], B, m))
            printf("%d ", A[i]);
    }
    printf("\n");
}

// Difference A - B
void differenceSet(int A[], int n, int B[], int m) {
    printf("Difference (A - B): ");
    for (int i = 0; i < n; i++) {
        if (!isElementInSet(A[i], B, m))
            printf("%d ", A[i]);
    }
    printf("\n");
}

// Complement of A (U - A)
void complementSet(int U[], int uSize, int A[], int aSize) {
    printf("Complement (~A) [U - A]: ");
    for (int i = 0; i < uSize; i++) {
        if (!isElementInSet(U[i], A, aSize))
            printf("%d ", U[i]);
    }
    printf("\n");
}

int main() {
    int U[] = {1, 2, 3, 4, 5, 6, 7};
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};

    int sizeU = sizeof(U) / sizeof(U[0]);
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    printf("Set A: ");
    for (int i = 0; i < sizeA; i++)
        printf("%d ", A[i]);
    printf("\n");

    printf("Set B: ");
    for (int i = 0; i < sizeB; i++)
        printf("%d ", B[i]);
    printf("\n");

    unionSet(A, sizeA, B, sizeB);
    intersectionSet(A, sizeA, B, sizeB);
    differenceSet(A, sizeA, B, sizeB);
    complementSet(U, sizeU, A, sizeA);

    return 0;
}
