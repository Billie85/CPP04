#include "../Dog.hpp"
#include "../Brain.hpp"

Brain *Dog::getBrain()
{
	return (this->_Brain);
}

Dog::Dog(): Animal("Dog"), _Brain(new Brain)
{
	std::cout << "Dog -> is create" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor destroy" << std::endl;
	delete this->_Brain;
}

Dog::Dog(const Dog &other): Animal(other) 
{
	_Brain = new Brain(*other._Brain);
	std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    Animal::operator=(other);
    if (this != &other) 
	{
        delete _Brain;
        this->_Brain = new Brain(*other._Brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}