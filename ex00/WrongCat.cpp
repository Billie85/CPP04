#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) :WrongAnimal(other)
{
	this->WrongAnimal::type = other.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat constructor destroy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->WrongAnimal::type = other.type;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}