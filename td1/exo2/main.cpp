#include "complex2D.h"

int main()
{
    Complex2D c1(3, 4);
    std::cout << "c1 = "; c1.print_complex();
    Complex2D c2(1, 2);
    std::cout << std::endl << "c2 = "; c2.print_complex(); std::cout << std::endl;
    Complex2D c3 = c1 + c2;
    std::cout << "c1 + c2 = ";
    c3.print_complex();
    Complex2D c4 = c1 - c2;
    std::cout << std::endl << "c1 - c2 = ";
    c4.print_complex();
    Complex2D c5 = c1 * c2;
    std::cout << std::endl << "c1 * c2 = ";
    c5.print_complex();
    Complex2D c6 = c1 / c2;
    std::cout << std::endl << "c1 / c2 = ";
    c6.print_complex();
    std::cout << std::endl << "module(c1):" << c1.module() << std::endl;
    std::cout << "c1 > c2: " << (c1 > c2) << std::endl;
    std::cout << "c1 < c2: " << (c1 < c2) << std::endl;

    return 0;
}