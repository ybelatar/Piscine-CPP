#include "Base.hpp"

Base *generate()
{
    std::srand(std::time(0));

    int r = std::rand();

    if (r % 3 == 0)
    {
        Base *base = new A;
        return (base);
    }
    else if (r % 3 == 1)
    {
        Base *base = new B;
        return (base);
    }
    else
    {
        Base *base = new C;
        return (base);
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "C'est de type A" << std::endl;
        return ;
    }
    if (dynamic_cast<B *>(p))
    {
        std::cout << "C'est de type B" << std::endl;
        return ;
    }
    if (dynamic_cast<C *>(p))
    {
        std::cout << "C'est de type C" << std::endl;
        return ;
    }
}


void identify(Base &p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "C'est de type A" << std::endl;
    }
    catch (std::exception &e)
    {}
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "C'est de type B" << std::endl;
    }
    catch (std::exception &e)
    {}
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "C'est de type C" << std::endl;
    }
    catch (std::exception &e)
    {}
}

int	main()
{
	Base* test = generate();
	identify(test);
	identify(*test);
	delete test;
}