/*
Write a program to create a Class Matrix with data members row and columns along with the suitable member functions to read and display the matrix.  Define a function, + and - that overloads its operation by performing the operations matrix addition and subtraction.  Implement using the objects.

For example:

Input	Result
2 3
2 2 3
4 5 6
2 3
4 5 6 
1 2 3
+
6 7 9
5 7 9
2 2
7 2
5 6
2 2
6 1
1 2
-
1 1
4 4
2 2 3
7 2 4
5 6
2 2
-
Invalid Matrix Size
*/
#include <iostream>
#include <vector>

class Matrix {
    public:
        std::vector<std::vector<int>> mat;
        int rows, cols;

        Matrix(int r, int c) : rows(r), cols(c) {
            mat.resize(r, std::vector<int>(c, 0));
        }

        void read() {
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    std::cin >> mat[i][j];
                }
            }
        }

        void display() {
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    std::cout << mat[i][j] << " ";
                }
                std::cout << "\n";
            }
        }

        Matrix operator + (Matrix &m) {
            if(rows != m.rows || cols != m.cols) {
                throw std::invalid_argument("Invalid Matrix Size");
            }
            Matrix result(rows, cols);
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    result.mat[i][j] = mat[i][j] + m.mat[i][j];
                }
            }
            return result;
        }

        Matrix operator - (Matrix &m) {
            if(rows != m.rows || cols != m.cols) {
                throw std::invalid_argument("Invalid Matrix Size");
            }
            Matrix result(rows, cols);
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    result.mat[i][j] = mat[i][j] - m.mat[i][j];
                }
            }
            return result;
        }
};

int main() {
    try {
        int rows, cols;
        std::cin >> rows >> cols;
        Matrix mat1(rows, cols);
        mat1.read();

        std::cin >> rows >> cols;
        Matrix mat2(rows, cols);
        mat2.read();

        Matrix result = mat1 + mat2; // for addition
        //Matrix result = mat1 - mat2; // for subtraction
        result.display();
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}
