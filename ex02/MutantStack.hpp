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
    
    public:
        typedef typename std::stack<T>::container_type::iterator iterator; 
        MutantStack(){}
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        MutantStack &operator=(const MutantStack &other) {
                std::stack<T>::operator=(other);
                return *this;
        }
        ~MutantStack(){}
        typename std::stack<T>::container_type::iterator begin() {
            typename std::stack<T>::container_type::iterator result = this->c.begin();
            return result;
        }
        typename std::stack<T>::container_type::iterator end() {
            typename std::stack<T>::container_type::iterator result = this->c.end();
            return result;
        }
} ;

#endif