#include "../Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = "idea!";
	}
}
	
Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = other.idea[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = other.idea[i];
	}
	return(*this);
}

std::string const *Brain::GetIdea() const
{
	return(this->idea);
}

Brain::~Brain()
{
	std::cout << "Brain constructor destroy" << std::endl;
}