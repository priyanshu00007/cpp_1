#include <iostream>

using namespace std;

class Matrix {
    int row, column;
    int mat[5][5];

public:
    Matrix() : row(1), column(1) {}
    Matrix(int row, int column) : row(row), column(column) {}

    void set() {
        cout << "Enter Matrix values" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void get() {
        cout << "Matrix: " << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix &m) {
        if ((row != m.row) || (column != m.column)) {
            cout << "Matrix dimensions are not the same for addition" << endl;
            return Matrix(0, 0);
        } else {
            Matrix result(row, column);
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    result.mat[i][j] = mat[i][j] + m.mat[i][j];
                }
            }
            return result;
        }
    }

    Matrix operator-(Matrix &m) {
        if ((row != m.row) || (column != m.column)) {
            cout << "Matrix dimensions are not the same for subtraction" << endl;
            return Matrix(0, 0);
        } else {
            Matrix result(row, column);
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    result.mat[i][j] = mat[i][j] - m.mat[i][j];
                }
            }
            return result;
        }
    }
};

int main() {
    Matrix m(2, 2);
    Matrix m1(2, 2);
    Matrix sum(2, 2);

    m.set();
    m1.set();

    sum = m + m1;
    cout << "Matrix Addition:" << endl;
    sum.get();

    sum = m - m1;
    cout << "Matrix Subtraction:" << endl;
    sum.get();

    return 0;
}
