#ifndef BinarySearch_H
#define BinarySearch_H

#include <iostream>
#include <vector>
#include "SearchingAlgorithm.h"

class BinarySearch : public SearchingAlgorithm
{
    private:
        int numberComparisons;     

    public:
        BinarySearch();
        int search(std::vector<int> tab, int value) override;
        
};

#endif