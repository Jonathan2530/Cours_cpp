#include "JumpSearch.h"
#include <cmath>

JumpSearch::JumpSearch(){
}

int JumpSearch::search(std::vector<int> tab, int value){
    int i = 0;
    int pas = int(sqrt(tab.size()));
    while (i < tab.size() && tab[i] < value){
        i += pas;
        set_numberComparisons(get_numberComparisons() + 1);
    }
    for (int j = i - pas; j < i && j < tab.size(); j++){
        set_numberComparisons(get_numberComparisons() + 1);
        if (tab[j] == value){
            return j;
        }
    }
    return -1;
}
