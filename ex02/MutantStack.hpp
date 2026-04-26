#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <limits>
#include <vector>
#include <ctime>

class MutantStack {
    private:
        MutantStack();
        std::stack<int> _vec;
    public:
    
        MutantStack(unsigned int N);
        ~MutantStack();

        template <typename T>
        void pushMS(T const &item) {
            push(item);
        }

        template <typename T>
        void popMS(T const &item) {
            pop(item);
        }

        template <typename T>
        void swapMS(T const &other) {
            swap(other);
        }
        
} ;

#endif