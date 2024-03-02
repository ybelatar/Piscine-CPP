#include "MutantStack.hpp"

int main ()
{
    MutantStack<int> test;
    test.push(24);
    test.push(98);
    std::cout << "the top element is " << test.top() << std::endl;
    test.pop();
    std::cout << "test size is "<< test.size() << std::endl;
    test.push(11);
    test.push(-45);
    test.push(7);
    test.push(1);
    MutantStack<int>::iterator it = test.begin();
    MutantStack<int>::iterator ite = test.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}