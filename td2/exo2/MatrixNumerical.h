#ifndef MATRIX_NUMERICAL_H
#define MATRIx_NUMERICAL_H

#include <iostream>
#include <vector>
#include "MatrixBase.h"

template <typename T>
class MatrixNumerical : public MatrixBase<T> {
    public:
        MatrixNumerical();
        MatrixNumerical(size_t r, size_t c);
        
        MatrixNumerical<T> operator+(const MatrixNumerical<T>& other) const;
        MatrixNumerical<T> operator-(const MatrixNumerical<T>& other) const;
        MatrixNumerical<T> operator*(const MatrixNumerical<T>& other) const;

        T getDeterminant() const;
        MatrixNumerical<T> getInverse() const;

        static MatrixNumerical<T> getIdentity(size_t size);
    };


#endif