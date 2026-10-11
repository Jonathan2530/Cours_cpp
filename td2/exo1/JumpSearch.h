#ifndef JumpSearch_H
#define JumpSearch_H

#include <iostream>
#include <vector>
#include "SearchingAlgorithm.h"

class JumpSearch : public SearchingAlgorithm
{
    private:
        int numberComparisons;     

    public:
        JumpSearch();
        int search(std::vector<int> tab, int value) override;
        
};

#endif