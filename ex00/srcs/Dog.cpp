#include "../Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog -> is create" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog constructor destroy" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {}

Dog &Dog::operator=(const Dog &other)
{
	this->Animal::type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}