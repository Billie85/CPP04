#include "../Cat.hpp"
#include "../Brain.hpp"

Brain *Cat::getBrain()
{
	return (this->_Brain);
}

Cat::Cat(): Animal("Cat") , _Brain(new Brain)
{
	std::cout << "Cat -> is create" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat constructor destroy" << std::endl;
	delete this->_Brain;
}

Cat::Cat(const Cat &other) : Animal(other) 
{
	_Brain = new Brain(*other._Brain);
	std::cout << "cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
	if (this != &other)
	{
		delete _Brain;
		this->_Brain = new Brain(*other._Brain);
	}
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}