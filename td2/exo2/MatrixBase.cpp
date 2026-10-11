#include "MatrixBase.h"

template <typename T>
MatrixBase<T>::MatrixBase() : rows(0), cols(0) {
}

template <typename T>
MatrixBase<T>::MatrixBase(size_t r, size_t c) : rows(r), cols(c) {
    matrix.resize(rows, std::vector<T>(cols));
}

template <typename T>
void MatrixBase<T>::display() const {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <typename T>
void MatrixBase<T>::addElement(size_t row, size_t col, T value) {
    if (row >= rows || col >= cols) {
        throw std::out_of_range("Erreur : indices impossible");
    }
    matrix[row][col] = value;
}

template <typename T>
T MatrixBase<T>::getElement(size_t row, size_t col) const {
    if (row >= rows || col >= cols) {
        throw std::out_of_range("Erreur : indices impossible");
    }
    return matrix[row][col];
}

template <typename T>
size_t MatrixBase<T>::getRows() const {
    return rows;
}

template <typename T>
size_t MatrixBase<T>::getCols() const {
    return cols;
}

template class MatrixBase<int>;
