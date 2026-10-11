#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <iostream>
#include <vector>

template <typename T>
class MatrixBase {
    private:
        std::vector<std::vector<T>> matrix;
        size_t rows;
        size_t cols;
    public:
        MatrixBase();
        MatrixBase(size_t r, size_t c);
        
        void addElement(size_t row, size_t col, T value);
        T getElement(size_t row, size_t col) const;

        size_t getRows() const;
        size_t getCols() const;

        void display() const;

};


#endif