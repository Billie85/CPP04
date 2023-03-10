#include "../Animal.hpp"
#include "../Dog.hpp"
#include "../Cat.hpp"
#include "../WrongAnimal.hpp"
#include "../WrongCat.hpp"

int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();  // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

  std::cout << "-------------wrong part-------------" << std::endl;
    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();  // will output the cat sound!
    animal->makeSound();
    delete animal;
    delete cat;
}