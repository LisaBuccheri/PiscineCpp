#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* ani = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    const WrongAnimal* w = new WrongCat();
    std::cout << "----------TYPE----------" << std::endl;
    std::cout << "animal: " << ani->getType() << std::endl;
    std::cout << "dog: " << d->getType() << std::endl;
    std::cout << "cat: " << c->getType() << std::endl;
    std::cout << "wrong: " << w->getType() << std::endl;
    std::cout << "----------SOUND----------" << std::endl;
    ani->makeSound();
    d->makeSound();
    c->makeSound();
    w->makeSound();

    return 0;
}