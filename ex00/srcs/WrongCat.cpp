#include "../WrongCat.hpp"

WrongCat::WrongCat() :WrongAnimal("WrongCat") {}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat constructor destroy" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) :WrongAnimal(other) {}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->WrongAnimal::type = other.type;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}