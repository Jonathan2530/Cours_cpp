#include "complex2D.h"
#include <cmath>

Complex2D::Complex2D():
re(0), img(0)
{  
}

Complex2D::Complex2D(double _re, double _img):
re(_re), img(_img)
{  
}

Complex2D::Complex2D(double value):
re(value), img(value)
{  
}

Complex2D::Complex2D(const Complex2D& c):
re(c.getRe()), img(c.getImg())
{  
}

double Complex2D::getRe() const{
    return re;
}

double Complex2D::getImg() const{
    return img;
}

void Complex2D::setRe(double value){
    re = value;
}

void Complex2D::setImg(double value){
    img = value;
}

Complex2D Complex2D::operator+(const Complex2D& c1) const{
    return Complex2D(re + c1.getRe(), img + c1.getImg());
}

Complex2D Complex2D::operator-(const Complex2D& c1) const{
    return Complex2D(re - c1.getRe(), img - c1.getImg());
}

Complex2D Complex2D::operator*(const Complex2D& c1) const{
    return Complex2D(re * c1.getRe() - img * c1.getImg(), re * c1.getImg() + img * c1.getRe());
}

Complex2D Complex2D::operator/(const Complex2D& c1) const{
    double deno = c1.getRe() * c1.getRe() + c1.getImg() * c1.getImg();
    if (deno == 0) {
        return Complex2D(0, 0); // Eviter division par zero
    }
    return Complex2D((re * c1.getRe() + img * c1.getImg()) / deno, (img * c1.getRe() - re * c1.getImg()) / deno);
}

double Complex2D::module() const{
    return sqrt(re * re + img * img);
}

bool Complex2D::operator>(const Complex2D& c1) const{
    return this->module() > c1.module();
}

bool Complex2D::operator<(const Complex2D& c1) const{
    return this->module() < c1.module();
}

void Complex2D::print_complex() const{
    std::cout << re << " + " << img << "i";
}
