#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <limits>
#include <vector>
#include <ctime>

template <typename T>
class MutantStack : public std::stack<T>{
    private:
        
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();
        std::deque<T>::const_iterator begin();
        std::deque<T>::const_iterator end();   
} ;

#endif