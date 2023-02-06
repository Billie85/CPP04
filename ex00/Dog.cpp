#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->Animal::type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog constructor destroy" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->Animal::type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}