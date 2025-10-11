/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:31:59 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:34:10 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		// Constructors and Destructors
		WrongAnimal( void );
		// WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &copy );
		virtual ~WrongAnimal( void );

		// Operators
		WrongAnimal	&operator=( const WrongAnimal &other );

		// Get/Set Functions
		std::string	getType( void ) const;
		void		setType( const std::string type );

		// Member functions
		virtual void	makeSound( void ) const;
};

//std::ostream	&operator<<( std::ostream &out, const WrongAnimal &WrongAnimal );

#endif