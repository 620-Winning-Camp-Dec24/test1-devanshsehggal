#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

class MatrixOperations {
public:
    // Function to perform matrix addition
    static Matrix operate(const Matrix& A, const Matrix& B, int operationType) {
        if (operationType == 1) {
            if (A.size() != B.size() || A[0].size() != B[0].size()) {
                throw invalid_argument("Invalid dimensions for operation.");
            }
            Matrix result(A.size(), vector<int>(A[0].size(), 0));
            for (size_t i = 0; i < A.size(); ++i) {
                for (size_t j = 0; j < A[0].size(); ++j) {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }
            return result;
        } else if (operationType == 2) {
            if (A[0].size() != B.size()) {
                throw invalid_argument("Invalid dimensions for operation.");
            }
            Matrix result(A.size(), vector<int>(B[0].size(), 0));
            for (size_t i = 0; i < A.size(); ++i) {
                for (size_t j = 0; j < B[0].size(); ++j) {
                    for (size_t k = 0; k < B.size(); ++k) {
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            return result;
        } else {
            throw invalid_argument("Invalid operation type.");
        }
    }
};

// Helper function to print a matrix
void printMatrix(const Matrix& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p, operationType;

    // Input dimensions and matrices
    cout << "Enter dimensions of Matrix A (m x n): ";
    cin >> m >> n;
    Matrix A(m, vector<int>(n));
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter dimensions of Matrix B (n x p): ";
    cin >> n >> p;
    Matrix B(n, vector<int>(p));
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    cout << "Enter operation type (1 for addition, 2 for multiplication): ";
    cin >> operationType;

    try {
        Matrix result = MatrixOperations::operate(A, B, operationType);
        cout << "Resulting matrix:\n";
        printMatrix(result);
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}