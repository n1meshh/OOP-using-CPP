#include <iostream>
using namespace std;

// Recursive function to compute factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to compute binomial coefficient: C(n, k)
int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to generate Pascal's Triangle
void generatePascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; space++)
            cout << "  ";

        // Print values in the row
        for (int j = 0; j <= i; j++)
            cout << binomialCoeff(i, j) << "   ";

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "\nPascal's Triangle:\n";
    generatePascalsTriangle(n);
    return 0;
}
    