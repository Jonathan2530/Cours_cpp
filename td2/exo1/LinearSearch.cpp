#include "LinearSearch.h"

LinearSearch::LinearSearch(){
}

int LinearSearch::search(std::vector<int> tab, int value){
    for(int i = 0; i<tab.size(); i++){
        set_numberComparisons(get_numberComparisons() + 1);
        if (tab[i] == value){
            return i;
        }
    }
    return -1;
}
