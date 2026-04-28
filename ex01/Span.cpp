#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) {
    _vec.reserve(N);
    _capacity = N;
}


Span::Span(const Span &other) : _vec(other._vec), _capacity(other._capacity) {
}

Span &Span::operator=(const Span &other) {
    if(this != &other) {
        _vec = other._vec;
        _capacity = other._capacity;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int i) {

    if(_vec.size() == _vec.capacity()) {
        throw std::out_of_range("max capacity reached");
    }
    _vec.push_back(i);
    std::cout << "number added: " << i << std::endl;
}

int Span::getCapacity() {
    return _capacity;
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

void Span::fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    std::size_t addN = std::distance(begin, end);
    if(addN * _vec.size() > _vec.capacity())
        throw std::out_of_range ("not enough capacity");
    _vec.insert(_vec.end(), begin, end);
}

void Span::largeNumTest() {
    int N = _capacity;
    std::vector<int> data;
    for (int i = 0; i < N; i++) {
        data.push_back(i);
    }
    fillVector(data.begin(), data.end());
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

static int randomNum() {
    return std::rand()%2000;
}

void Span::generateRandom() {
    for (unsigned int i = 0; i < _capacity; ++i) {
         int n = randomNum();
        std::vector<int>::iterator it = std::find(_vec.begin(), _vec.end(), n);
        if (it == _vec.end())
            addNumber(n);
    }
}
