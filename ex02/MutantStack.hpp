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
        typedef typename std::stack<T>::container_type::iterator const_iterator;

        MutantStack(){}

        MutantStack(const MutantStack &other) : std::stack<T>(other) {}

        MutantStack &operator=(const MutantStack &other) {
                std::stack<T>::operator=(other);
                return *this;
        }

        ~MutantStack(){}

        iterator begin() {
            iterator result = this->c.begin();
            return result;
        }
        iterator end() {
            iterator result = this->c.end();
            return result;
        }

        const_iterator begin() const {
            const_iterator result = this->c.begin();
            return result;
        }
        const_iterator end() const {
            const_iterator result = this->c.end();
            return result;
        }
} ;

#endif