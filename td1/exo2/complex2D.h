#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <iostream>

class Complex2D{
    public:
        Complex2D();
        Complex2D(double _re, double _img);
        Complex2D(double value);
        Complex2D(const Complex2D& c);

    private:
        double re;
        double img;

    public:
        double getRe() const;
        double getImg() const;
        void setRe(double);
        void setImg(double);

        Complex2D operator+(const Complex2D& c1) const;
        Complex2D operator-(const Complex2D& c1) const;
        Complex2D operator*(const Complex2D& c1) const;
        Complex2D operator/(const Complex2D& c1) const;

        bool operator>(const Complex2D& c1) const;
        bool operator<(const Complex2D& c1) const;

        double module() const;

        void print_complex() const;
};

#endif