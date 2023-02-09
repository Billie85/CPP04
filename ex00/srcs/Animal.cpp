#include "../Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << type << " is created in Animal constructor" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << type << " Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor destroy" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}