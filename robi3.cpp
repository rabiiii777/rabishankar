//This code is developed by Rabi 
#include <iostream>
using namespace std;

const int MAX = 10; // Maximum matrix size

// Function to input a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols, const string& name) {
    cout << "Enter elements of " << name << " matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols, const string& name) {
    cout << name << " Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

// Addition
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] + B[i][j];
}

// Subtraction
void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] - B[i][j];
}

// Multiplication
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
}

// Transpose
void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[j][i] = matrix[i][j];
}

int main() {
    int A[MAX][MAX], B[MAX][MAX];
    int result[MAX][MAX];

    int rowsA, colsA, rowsB, colsB;

    // Input dimensions
    cout << "Enter rows and columns of Matrix A: ";
    cin >> rowsA >> colsA;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> rowsB >> colsB;

    // Input matrices
    inputMatrix(A, rowsA, colsA, "A");
    inputMatrix(B, rowsB, colsB, "B");

    // Display matrices
    displayMatrix(A, rowsA, colsA, "A");
    displayMatrix(B, rowsB, colsB, "B");

    // Addition and Subtraction (only if same dimensions)
    if (rowsA == rowsB && colsA == colsB) {
        addMatrices(A, B, result, rowsA, colsA);
        displayMatrix(result, rowsA, colsA, "Addition");

        subtractMatrices(A, B, result, rowsA, colsA);
        displayMatrix(result, rowsA, colsA, "Subtraction");
    } else {
        cout << "\nAddition and Subtraction not possible (dimension mismatch).\n";
    }

    // Multiplication (A's cols must equal B's rows)
    if (colsA == rowsB) {
        multiplyMatrices(A, B, result, rowsA, colsA, colsB);
        displayMatrix(result, rowsA, colsB, "Multiplication");
    } else {
        cout << "\nMultiplication not possible (A's columns != B's rows).\n";
    }

    // Transpose of A
    transposeMatrix(A, result, rowsA, colsA);
    displayMatrix(result, colsA, rowsA, "Transpose of A");

    // Transpose of B
    transposeMatrix(B, result, rowsB, colsB);
    displayMatrix(result, colsB, rowsB, "Transpose of B");

    return 0;
}

