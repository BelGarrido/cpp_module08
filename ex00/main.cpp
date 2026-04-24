#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <list>

int main(void) {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    try { 
        std::vector<int>::const_iterator result = easyfind(v, 1); 
        std::cout << "Found: the value is " << *result << std::endl;

    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    try { 
        std::list<int>::const_iterator result = easyfind(l, 4); 
        std::cout << "Found: the value is " << *result << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::deque<int> d;
    d.push_back(2);
    d.push_back(1);
    d.push_back(3);
    d.push_back(4);
    try { 
        std::deque<int>::const_iterator result = easyfind(d, 7); 
        std::cout << "Found: the value is " << *result << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}