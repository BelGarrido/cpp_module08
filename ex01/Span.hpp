#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <limits>
#include <vector>
#include <ctime>

class Span {
    private:
        Span();
        std::vector<int> _vec;
    public:
    
        Span(unsigned int N);
        ~Span();
        void addNumber(int i);
        int getCapacity();
        int getSize();
        int shortestSpan();
        int largestSpan();
        void generateRandom();
        void printVec();
        
} ;

#endif