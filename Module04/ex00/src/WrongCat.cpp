#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
#ifdef DEBUG
	std::cout << "WrongCat constructor called" << std::endl;
#endif
}

WrongCat::WrongCat(const WrongCat &copy)
{
#ifdef DEBUG
	std::cout << "WrongCat copy constructor called" << std::endl;
#endif
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
#ifdef DEBUG
	std::cout << "WrongCat assignation operator called" << std::endl;
#endif
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
#ifdef DEBUG
	std::cout << "WrongCat destructor called" << std::endl;
#endif
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Meoww" << std::endl;
}
