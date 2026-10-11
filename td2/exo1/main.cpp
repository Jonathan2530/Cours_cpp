#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main(){

    // Linear Search
    LinearSearch algo1 = LinearSearch();
    std::vector<int> v1 = { 1, 2, 3, 4, 6, 8};
    int indice = algo1.search(v1, 4);
    std::cout << "Indice :" << indice;
    std::cout << std::endl << "Nombre de comparaisons" << algo1.get_numberComparisons();

    // Jump Search
    JumpSearch algo2 = JumpSearch();
    indice = algo2.search(v1, 4);
    std::cout << std::endl << "Indice :" << indice;
    std::cout << std::endl << "Nombre de comparaisons :" << algo2.get_numberComparisons();

    // Binary Search
    BinarySearch algo3 = BinarySearch();
    indice = algo3.search(v1, 4);
    std::cout << std::endl << "Indice :" << indice;
    std::cout << std::endl << "Nombre de comparaisons :" << algo3.get_numberComparisons();

    return 0;
}