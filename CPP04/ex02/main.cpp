#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int arrLen = 4;
    const AAnimal* animals[arrLen];
    const Dog* a = new Dog();
    const Cat* b = new Cat();

    //exemple abstract class
    //const AAnimal* ani = new AAnimal();
    
    for(int i = 0; i < arrLen; i++)
    {
        if (i < arrLen/2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    for (int j = 0; j < arrLen; j++)
        animals[j]->makeSound();

    for(int k = 0; k < arrLen; k++)
        delete animals[k];

    delete a;
    delete b;

    return (0);
}