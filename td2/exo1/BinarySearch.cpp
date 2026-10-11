#include "BinarySearch.h"
#include <cmath>

BinarySearch::BinarySearch(){
}

int BinarySearch::search(std::vector<int> tab, int value){
    int i = 0;
    int deb = 0;
    int fin = tab.size() - 1;
    while (deb <= fin){
        int m = deb + ((fin - deb) / 2);
        set_numberComparisons(get_numberComparisons() + 1);
        if (tab[m] == value){
            return m;
        }
        if (tab[m] < value){
            deb = m + 1;
        }
        else{
            fin = m - 1;
        }
    }
    return -1;
}
