#include "../Cat.hpp"
#include "../Brain.hpp"

Brain *Cat::getBrain()
{
	return (this->_Brain);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
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
	_Brain = new Brain(*other._Brain);//<-here
}

/* Cat const &Cat::operator=(const Cat &other)//before
{
	std::cout << "Cat operator= called" << std::endl;
	this->Animal::type = other.type;
	return(*this);
} */
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat operator= called" << std::endl;
    Animal::operator=(other);
    delete _Brain;
    this->_Brain = new Brain(*other._Brain);
    return (*this);
}