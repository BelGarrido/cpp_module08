#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) {
    _vec.reserve(N);
}

Span::~Span() {}

void Span::addNumber(int i) {

    if(_vec.size() == _vec.capacity()) {
        throw std::out_of_range("Max capacity reached");
    }
    _vec.push_back(i);
    std::cout << "number added: " << i << std::endl;
}

int Span::getCapacity() {
    return _vec.capacity();
}

int Span::getSize() {
    return _vec.size();
}

int Span::shortestSpan() {

    std::sort(_vec.begin(), _vec.end());
    if (_vec.size() <= 1)
        throw std::out_of_range("no span can be found");
    int min = std::numeric_limits<int>::max();
    int tmp = 0;

    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end() - 1; ++it) {
        tmp = *(it + 1) - *it;
        if (tmp < min)
             min = tmp;
    }
    return min;
}

int Span::largestSpan() {

    if (_vec.size() <= 1)
        throw std::out_of_range("no span can be found");
    std::sort(_vec.begin(), _vec.end());
    int result = *(_vec.end() - 1) - *(_vec.begin());
    return result;
}

static int randomNum() {
    return std::rand()%2000;
}

void Span::generateRandom() {
    for (int i = 0; i < getCapacity(); ++i) {
         int n = randomNum();
        std::vector<int>::iterator it = std::find(_vec.begin(), _vec.end(), n);
        if (it == _vec.end())
            addNumber(n);
    }
}

void Span::printVec() {

    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it) {
    std::cout << *it;
    std::vector<int>::iterator check = it;
    if (++check != _vec.end()) 
        std::cout << ", ";
    }
    std::cout << std::endl; 
}
