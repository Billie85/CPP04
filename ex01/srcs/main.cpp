#include "../Animal.hpp"
#include "../Dog.hpp"
#include "../Cat.hpp"
#include "../WrongAnimal.hpp"
#include "../WrongCat.hpp"

int main(void)
{
	std::cout << "--------| sound |---------" << std::endl;
	Animal *test1_dog = new Dog();
	Animal *test2_cat = new Cat();

	test1_dog->makeSound();
	test2_cat->makeSound();
	
	delete test1_dog;
	delete test2_cat;

	std::cout << "--------| Get Brain |---------" << std::endl;

	Dog dog;
	Cat cat;

	dog.GetBrain();
	cat.GetBrain();
}