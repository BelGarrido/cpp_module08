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
        unsigned int _capacity;

    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void largeNumTest();

        void addNumber(int i);
        int shortestSpan();
        int largestSpan();

        void printVec();
        int getSize();
        int getCapacity();

        void generateRandom();
} ;

#endif