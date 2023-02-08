#include "../Cat.hpp"

Cat::Cat()
{
	this->Animal::type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) :Animal(other)
{
	this->Animal::type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat constructor destroy" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->Animal::type = other.type;
	return(*this);
}


void Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}