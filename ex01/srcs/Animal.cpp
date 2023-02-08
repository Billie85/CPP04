#include "../Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}