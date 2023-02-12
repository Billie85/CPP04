#include "../Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (size_t i = 0; i < Idea; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	for (size_t i = 0; i < Idea; i++){
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string const *Brain::getIdeas() const{
	return (this->ideas);
}

Brain::~Brain(){
	std::cout << "Brain destructor was destroyed." << std::endl;
	std::cout << std::endl;
}