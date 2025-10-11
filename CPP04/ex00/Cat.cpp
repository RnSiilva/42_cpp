/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:18:54 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 21:28:04 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Cat::Cat( void )
{
	std::cout << "😺 Cat default constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat &copy ) : Animal( copy )
{
	std::cout << "😺 Cat copy constructor called." << std::endl;
	*this = copy;
}

Cat::~Cat( void )
{
	std::cout << "😺 Animal " << this->_type << " was destroyed!" << std::endl;
	
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
Cat&	Cat::operator=( const Cat &other )
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	Cat::makeSound( void ) const 
{
	std::cout << "😺 Cat: Meow!" << std::endl;
}
