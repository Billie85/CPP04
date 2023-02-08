#include "../Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->idea[i] = "idea!";
	}
	
}
	
Brain::Brain(const Brain &other)
{
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

Brain::~Brain(){}