/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:19:02 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:12:22 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors and Destructos
		Dog( void );
		// Cat( const std::string type );
		Dog( const Dog &copy );
		virtual ~Dog( void );

		// Operators
		Dog&	operator=( const Dog &other );

		// Member functions
		void	makeSound( void ) const;
};

#endif
