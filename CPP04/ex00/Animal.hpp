/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:08:33 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:15:06 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
	protected:
		std::string	_type;

	public:
		// Constructors and Destructors
		Animal( void );
		// Animal( std::string type );
		Animal( const Animal &copy );
		virtual ~Animal( void );

		// Operators
		Animal	&operator=( const Animal &other );

		// Get/Set Functions
		std::string	getType( void ) const;
		void		setType( const std::string type );

		// Member functions
		virtual void	makeSound( void ) const;
};

//std::ostream	&operator<<( std::ostream &out, const Animal &animal );

#endif
