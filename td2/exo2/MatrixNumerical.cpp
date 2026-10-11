#include "MatrixNumerical.h"

template <typename T>
MatrixNumerical<T>::MatrixNumerical(): MatrixBase<T>() {
}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t r, size_t c) : MatrixBase<T>(r, c) {
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator+(const MatrixNumerical<T>& other) const {
    size_t rows = this->getRows();
    size_t cols = this->getCols();
    MatrixNumerical<T> result(rows, cols);

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            T sum = this->getElement(i, j) + other.getElement(i, j);
            result.addElement(i, j, sum);
        }}
    return result;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator-(const MatrixNumerical<T>& other) const {
    size_t rows = this->getRows();
    size_t cols = this->getCols();
    MatrixNumerical<T> result(rows, cols);

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            T dif = this->getElement(i, j) - other.getElement(i, j);
            result.addElement(i, j, dif);
        }}
    return result;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::operator*(const MatrixNumerical<T>& other) const {
    
    if (this->getCols() != other.getRows()) {
        throw std::invalid_argument("Erreur : la tailles des matrices n'est pas compatible pour la multiplication");
    }

    size_t rows = this->getRows();
    size_t cols = other.getCols();
    MatrixNumerical<T> result(rows, cols);

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            T sum = 0;
            for (size_t k = 0; k < this->getCols(); k++) {
                sum += this->getElement(i, k) * other.getElement(k, j);
            }
            result.addElement(i, j, sum);
        }}
    return result;
}

template <typename T>
MatrixNumerical<T> getCofactor(const MatrixNumerical<T>& m, size_t x, size_t y){
    
    size_t nb_rows = m.getRows();
    size_t nb_cols = m.getCols();

    MatrixNumerical<T> cofact(nb_rows - 1, nb_cols - 1);
    int r = 0;
    for (int i = 0; i < nb_rows; i++) {

        if(i == x){
            continue;
        }

        int c = 0;

        for(int j = 0; j < nb_cols; j++){
            if(j == y){
                continue;
            }

            cofact.addElement(r, c, m.getElement(i, j));
            c++;
        }
        r++;
    }
    return cofact;
}

template <typename T>
T MatrixNumerical<T>::getDeterminant() const{
    int nb_cols = this->getCols();
    int nb_rows = this->getRows();
    if (nb_rows != nb_cols) {
        throw std::invalid_argument("Erreur : la matrice n'est pas carrée");
    }
    if (nb_rows == 1) {
        return this->getElement(0, 0);
    }
    if (nb_rows == 2) {
        return this->getElement(0, 0) * this->getElement(1, 1) - this->getElement(0, 1) * this->getElement(1, 0);
    }
    T det = 0;
    for (size_t i = 0; i < nb_cols; i++) {
        int signe = (i % 2 == 0) ? 1 : -1;
        T factor = this->getElement(0, i);
        if (factor != 0) {
            MatrixNumerical<T> cofact = getCofactor(*this, 0, i);
            det += signe * factor * cofact.getDeterminant();
        }
    }
    return det;
}

template <typename T>
MatrixNumerical<T> MatrixNumerical<T>::getIdentity(size_t size) {
    MatrixNumerical<T> id(size, size);
    for (int i = 0; i < size; i++) {
        id.addElement(i, i, 1);
    }
    return id;
}

template class MatrixNumerical<int>;
