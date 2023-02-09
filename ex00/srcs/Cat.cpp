#include "../Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat -> is create" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat constructor destroy" << std::endl;
}

Cat::Cat(const Cat &other) :Animal(other) {}

Cat &Cat::operator=(const Cat &other)
{
	this->Animal::type = other.type;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}