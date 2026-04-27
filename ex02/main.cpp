#include "MutantStack.hpp"
#include "../colors.hpp"


// tengo que añadir el operador de copiar y tal !!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main(void) {
    std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #1 checking iterators ] *´¯`*..*´¯`* " << RESET << std::endl;
    
    MutantStack<int> newSet;
    newSet.push(1);
    newSet.push(2);
    newSet.push(3);
    newSet.push(4);
    newSet.push(5);

    for (std::deque<int>::iterator it = newSet.beginMs(); it != newSet.endMs(); it++) {
        std::cout << *it << std::endl;
    }

    {
        std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #2 checking copy constructor ] *´¯`*..*´¯`* " << RESET << std::endl;   

        MutantStack<std::string> copySet;
        copySet.push("Hello");
        copySet.push("world");
        copySet.push("what's");
        copySet.push("up?");
        MutantStack<std::string> copySet2(copySet);


        for (std::deque<std::string>::iterator it = copySet2.beginMs(); it != copySet2.endMs(); it++) {
            std::cout << *it << std::endl;
        }
    }
    {
        std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #2 checking copy constructor ] *´¯`*..*´¯`* " << RESET << std::endl;  

        MutantStack<std::string> copySet;
        copySet.push("I");
        copySet.push("am");
        copySet.push("checking");
        copySet.push("operator=");
        MutantStack<std::string> copySet2;
        copySet2.push("this");
        copySet2.push("should");
        copySet2.push("not be");
        copySet2.push("printed");
        copySet2 = copySet;

        for (std::deque<std::string>::iterator it = copySet2.beginMs(); it != copySet2.endMs(); it++) {
        std::cout << *it << std::endl;
        }
    }
    return 0;
}