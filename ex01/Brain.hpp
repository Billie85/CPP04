#ifndef BRAIN_HPP
# define BRAIN_HPP

#define Idea 100

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[Idea];
public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);
	std::string const *getIdeas() const;
};

#endif