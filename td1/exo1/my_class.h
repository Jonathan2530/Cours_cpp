#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>

class myclass{
    private:
        std::string str;
    public:
        myclass();
        myclass(std::string str2);

        void print_my_element();

};

#endif