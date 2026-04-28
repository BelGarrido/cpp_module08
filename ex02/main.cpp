#include "MutantStack.hpp"
#include "../colors.hpp"

// int main(void) {
//     {
//         std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #1 checking iterators ] *´¯`*..*´¯`* " << RESET << std::endl;
//         MutantStack<int> newSet;
//         newSet.push(1);
//         newSet.push(2);
//         newSet.push(3);
//         newSet.push(4);
//         newSet.push(5);

//         for (std::deque<int>::iterator it = newSet.beginMs(); it != newSet.endMs(); it++) {
//             std::cout << *it << std::endl;
//         }
//     }
//     {
//         std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #2 checking copy constructor ] *´¯`*..*´¯`* " << RESET << std::endl;   
//         MutantStack<std::string> original;
//         original.push("Hello");
//         original.push("world");
//         original.push("what's");
//         original.push("up?");
//         MutantStack<std::string> copy(original);

//         for (std::deque<std::string>::iterator it = copy.beginMs(); it != copy.endMs(); it++) {
//             std::cout << *it << std::endl;
//         }
//     }
//     {
//         std::cout << MAGENTA << "\n*´¯`*..*´¯`* [ #3 checking copy asigment ] *´¯`*..*´¯`* " << RESET << std::endl;  
//         MutantStack<std::string> original;
//         original.push("I");
//         original.push("am");
//         original.push("checking");
//         original.push("operator=");
//         MutantStack<std::string> copy;
//         copy.push("this");
//         copy.push("shouldn't");
//         copy.push("be");
//         copy.push("printed");
//         copy = original;

//         for (std::deque<std::string>::iterator it = copy.beginMs(); it != copy.endMs(); it++) {
//         std::cout << *it << std::endl;
//         }
//     }
//     return 0;
// }


int main()
{
    MutantStack<int>
    mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}