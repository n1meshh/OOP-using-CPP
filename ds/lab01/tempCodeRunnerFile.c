#include <stdio.h>

// Function to return maximum of two values
float max(float a, float b) {
    return (a > b) ? a : b;
}

// Function to return minimum of two values
float min(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    int n;

    printf("Enter the number of elements in the fuzzy sets: ");
    scanf("%d", &n);

    float A[n], B[n], unionSet[n], intersectionSet[n], complementA[n];

    // Input for Fuzzy Set A
    printf("Enter membership values for Fuzzy Set A:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%f", &A[i]);
    }

    // Input for Fuzzy Set B
    printf("Enter membership values for Fuzzy Set B:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%f", &B[i]);
    }

    // Calculating Union, Intersection and Complement
    for (int i = 0; i < n; i++) {
        unionSet[i] = max(A[i], B[i]);
        intersectionSet[i] = min(A[i], B[i]);
        complementA[i] = 1 - A[i];
    }

    // Display Results
    printf("\nFuzzy Set A: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", A[i]);
    }

    printf("\nFuzzy Set B: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", B[i]);
    }

    printf("\nUnion (A ∪ B): ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", unionSet[i]);
    }

    printf("\nIntersection (A ∩ B): ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", intersectionSet[i]);
    }

    printf("\nComplement (~A): ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", complementA[i]);
    }

    printf("\n");
    return 0;
}
