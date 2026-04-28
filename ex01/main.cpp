#include "Span.hpp"
#include "../colors.hpp"

int main(void) {
    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #1 shortestSpan() with 0 elements ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span empty(10);
        empty.shortestSpan(); // should throw
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #2 shortestSpan() with 2 elements ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span one(10);
        one.addNumber(42);
        one.shortestSpan(); // should throw
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #3 largestSpan() with 2 elements ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span one(10);
        one.addNumber(42);
        one.largestSpan(); // should throw
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #4 shortestSpan() and largestSpan() ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span v(10);
        v.addNumber(42);
        v.addNumber(2);
        v.addNumber(200);
        std::cout << "longest span: " << v.largestSpan() << std::endl; //198
        std::cout << "shortest span: " << v.shortestSpan() << std::endl; //40
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #5 addNumber() max limit ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span full(3);
        full.addNumber(1);
        full.addNumber(2);
        full.addNumber(3);
        full.addNumber(4); // should throw
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #6 large num of elements ] *´¯`*..*´¯`* " << RESET << std::endl;
    try {
        Span v(50);
        v.largeNumTest();
        //v.printVec();
        std::cout << "size: " << v.getSize() << std::endl;
        std::cout << "capacity: " << v.getCapacity() << std::endl;
        std::cout << "longest span: " << v.largestSpan() << std::endl;
        std::cout << "shortest span: " << v.shortestSpan() << std::endl;
        //v.printVec();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #7 non sorted vector ] *´¯`*..*´¯`* " << RESET << std::endl;
    // try {
    //     Span v(50);
    //     std::srand(std::time(0));
    //     std::cout << "size: " << v.getSize() << std::endl;
    //     std::cout << "capacity: " << v.getCapacity() << std::endl;
    //     v.generateRandom();
    //     v.printVec();
    //     std::cout << "size: " << v.getSize() << std::endl;
    //     std::cout << "capacity: " << v.getCapacity() << std::endl;
    //     std::cout << "longest span: " << v.largestSpan() << std::endl;
    //     std::cout << "shortest span: " << v.shortestSpan() << std::endl;
    //     v.printVec();
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }
    return 0;
}