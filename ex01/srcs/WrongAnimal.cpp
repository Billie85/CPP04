#include "../WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type = other.type;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}