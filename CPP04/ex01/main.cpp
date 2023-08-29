#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int arrLen = 4;
    const Animal* animals[arrLen];
    const Animal* a = new Dog();
    const Animal* b = new Cat();
    
    for(int i = 0; i < arrLen; i++)
    {
        if (i < arrLen/2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    for(int j = 0; j < arrLen; j++)
        delete animals[j];

    delete a;
    delete b;

    return (0);
}