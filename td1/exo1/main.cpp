#include "print_str.h"
#include "my_class.h"


int main()
{
    // Question 1
    std::cout << "Hello World !" << std::endl;

    // Question 3
    print_str("Hello World q3 !");

    // Question 4
    myclass obj1 = myclass("Hello World q4 !");
    obj1.print_my_element();

    return 0;
}