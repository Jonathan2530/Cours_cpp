#include "MatrixBase.h"
#include "MatrixNumerical.h"

int main(){
    MatrixNumerical<int> m1(2, 2);
    m1.addElement(0, 0, 1);
    m1.addElement(0, 1, 2);
    m1.addElement(1, 0, 3);
    m1.addElement(1, 1, 4);

    m1.display();
    m1.getDeterminant();
    m1.getIdentity(3).display();

    return 0;
}