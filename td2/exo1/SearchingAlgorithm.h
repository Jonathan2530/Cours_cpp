#ifndef SearchingAlgorithm_H
#define SearchingAlgorithm_H

#include <iostream>
#include <vector>

class SearchingAlgorithm{
    private:
        int numberComparisons;
        static int totalComparisons;
        static int totalSearch;
        static int averageComparaisons;

    public:
        SearchingAlgorithm();
        virtual int search(std::vector<int> tab, int value) = 0;
        void displaySearchResults(std::ostream& ost, int results, int target);

        int get_numberComparisons();
        void set_numberComparisons(int value);


};

#endif