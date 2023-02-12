#include "../Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "string constructor" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor destroy" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal operator= called" << std::endl;
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