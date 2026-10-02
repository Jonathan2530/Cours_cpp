#include "my_class.h"

myclass::myclass()
{
    str = "Hello World !";
}

myclass::myclass(std::string str2)
{
    str = str2;
}

void myclass::print_my_element()
{
    std::cout << str << std::endl;
}

