#include "SearchingAlgorithm.h"

SearchingAlgorithm::SearchingAlgorithm(){
}

int SearchingAlgorithm::get_numberComparisons(){
    return numberComparisons;
}

void SearchingAlgorithm::set_numberComparisons(int value){
    numberComparisons = value;
}

void SearchingAlgorithm::displaySearchResults(std::ostream& ost, int results, int target){
    if (results == -1){
        ost << "La valeur " << target << " n'a pas été trouvée" << std::endl;
    } 
    else {
        ost << "L'indice de " << target << " est " << results << std::endl;
    }
}