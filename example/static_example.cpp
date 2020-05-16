#include <iostream>

class Dog
{

public:
    Dog()
    {
        id = total;
        total += 1;
    }

    static int total;
    int getId()
    {
        return id;
    }

private:
    int id;
};

int Dog::total = 0;

int main()
{

    Dog d1 = Dog();
    Dog d2 = Dog();
    std::cout << "total :" << Dog::total << std::endl;
    std::cout << "d1.id :" << d1.getId() << std::endl;
    std::cout << "d2.id :" << d2.getId() << std::endl;
    std::cout << "d1.total :" << d1.total << std::endl;
    std::cout << "d2.total :" << d2.total << std::endl;
    return 0;
}
