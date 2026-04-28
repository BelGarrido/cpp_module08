#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

template <typename T>
typename T::const_iterator easyfind(T const &pool, int x) {
    typename T::const_iterator result = std::find(pool.begin(), pool.end(), x);
    if(result == pool.end())
        throw std::out_of_range("not found");
    return result;
}

#endif