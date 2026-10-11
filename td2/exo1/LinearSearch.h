#ifndef LinearSearch_H
#define LinearSearch_H

#include <iostream>
#include <vector>
#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm
{
    private:
        int numberComparisons;     

    public:
        LinearSearch();
        int search(std::vector<int> tab, int value) override;

        
};

#endif