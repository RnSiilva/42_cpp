/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:18:54 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 22:53:24 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Cat::Cat( void )
{
	std::cout << "😺 Cat default constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( const Cat &copy ) : Animal( copy )
{
	std::cout << "😺 Cat copy constructor called." << std::endl;
	this->_brain = new Brain( *copy._brain ); // deep copy
}

Cat::~Cat( void )
{
	std::cout << "😺 Animal " << this->_type << " was destroyed!" << std::endl;
	delete this->_brain;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
Cat&	Cat::operator=( const Cat &other )
{
	if (this != &other)
	{
		this->_type = other.getType();
		*this->_brain = *other._brain; // usa seu operator= de Brain
	}
	return (*this);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	Cat::makeSound( void ) const 
{
	std::cout << "😺 Cat: Meow!" << std::endl;
}

// ------------------------------ GET FUNCTIONS -------------------------------
Brain	*Cat::getBrain( void ) const { return (this->_brain); }
