#include "exercise4.hpp"

int** readMatrixFromFile(const char* fileInStr, int &rows, int &cols) {
    ifstream f;
    
    f.open(fileInStr);

    if (f.fail()) {
        cout << "Could not open " << fileInStr;
        throw -1;
    }

    f >> rows;
    f >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            f >> matrix[i][j];
        }
    }

    f.close();

    return matrix;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j];
            if (j == cols - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }
}

void writeMatrix(int **matrix, int rows, int cols, const char* fileOutStr) {
    ofstream f;
    f.open(fileOutStr);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            f << matrix[i][j];
            if (j == cols - 1) {
                if (i < rows - 1) { f << endl; }
            } else {
                f << " ";
            }
        }
    }
    f.flush(); 
    f.close();
}


void multiplyMatrices(int** matrix1, int** matrix2, int** &result, int rows, int col_row, int cols) {
    result = new int*[rows];
    for (int i = 0; i < rows; i++) {
        result[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            for (int z = 0; z < col_row; z++) {
                sum += matrix1[i][z] * matrix2[z][j];
            }
            result[i][j] = sum;
        }
    }
}

void deleteMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
