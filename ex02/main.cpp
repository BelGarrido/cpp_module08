#include "MutantStack.hpp"
#include "../colors.hpp"
#include <list>


int main(void) {
    {
        std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ ITERATOR ] *´¯`*..*´¯`* " << RESET << std::endl;
        MutantStack<int> newSet;
        newSet.push(1);
        newSet.push(2);
        newSet.push(3);
        newSet.push(4);
        newSet.push(5);

        for (std::deque<int>::iterator it = newSet.begin(); it != newSet.end(); it++) {
            std::cout << *it << std::endl;
        }
    }
    {
        std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ COPY CONSTRUCTOR ] *´¯`*..*´¯`* " << RESET << std::endl;   
        MutantStack<std::string> original;
        original.push("Hello");
        original.push("world");
        original.push("what's");
        original.push("up?");
        MutantStack<std::string> copy(original);

        for (std::deque<std::string>::iterator it = copy.begin(); it != copy.end(); it++) {
            std::cout << *it << std::endl;
        }
    }
    {
        std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ COPY ASSIGNMENT ] *´¯`*..*´¯`* " << RESET << std::endl;  
        MutantStack<std::string> original;
        original.push("I");
        original.push("am");
        original.push("checking");
        original.push("operator=");
        MutantStack<std::string> copy;
        copy.push("this");
        copy.push("shouldn't");
        copy.push("be");
        copy.push("printed");
        copy = original;

        for (std::deque<std::string>::iterator it = copy.begin(); it != copy.end(); it++) {
        std::cout << *it << std::endl;
        }
    }
    return 0;
}


// int main()
// {
//     std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ CONST_ITERATOR ] *´¯`*..*´¯`* " << RESET << std::endl;
//     {
//         MutantStack<int>
//         mstack;
//         mstack.push(5);
//         mstack.push(17);
//         std::cout << mstack.top() << std::endl;
//         mstack.pop();
//         std::cout << mstack.size() << std::endl;
//         mstack.push(3);
//         mstack.push(5);
//         mstack.push(737);
//         //[...]
//         mstack.push(0);
//         MutantStack<int>::const_iterator it = mstack.begin();
//         MutantStack<int>::const_iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std ::endl;
//             ++it;
//         }
//         std::stack<int> s(mstack);
//     }
    
//     std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ ITERATOR ] *´¯`*..*´¯`* " << RESET << std::endl;
//     {
//         MutantStack<int> mstack;
//         mstack.push(5);
//         mstack.push(17);
//         std::cout << mstack.top() << std::endl;
//         mstack.pop();
//         std::cout << mstack.size() << std::endl;
//         mstack.push(3);
//         mstack.push(5);
//         mstack.push(737);
//         //[...]
//         mstack.push(0);
//         MutantStack<int>::iterator it = mstack.begin();
//         MutantStack<int>::iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std ::endl;
//             ++it;
//         }
//     }


//     {
//         std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ LISTS ] *´¯`*..*´¯`* " << RESET << std::endl;
//         std::list<int> mstack;
//         mstack.push_back(5);
//         mstack.push_back(17);
//         std::cout << mstack.back() << std::endl;
//         mstack.pop_back();
//         std::cout << mstack.size() << std::endl;
//         mstack.push_back(3);
//         mstack.push_back(5);
//         mstack.push_back(737);
//         //[...]
//         mstack.push_back(0);
//         std::list<int>::iterator it = mstack.begin();
//         std::list<int>::iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//         std::list<int> s(mstack);
//         return 0;
//     }
// }
