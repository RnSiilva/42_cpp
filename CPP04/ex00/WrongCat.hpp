/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:32:11 by resilva           #+#    #+#             */
/*   Updated: 2025/10/06 21:52:38 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string	_type;

	public:
		// Constructors and Destructors
		WrongCat( void );
		// WrongCat( std::string type );
		WrongCat( const WrongCat &copy );
		virtual ~WrongCat( void );

		// Operators
		WrongCat	&operator=( const WrongCat &other );

		// Get/Set Functions
		std::string	getType( void ) const;
		void		setType( const std::string type );

		// Member functions
		void	makeSound( void ) const;
};

//std::ostream	&operator<<( std::ostream &out, const WrongCat &WrongCat );

#endif