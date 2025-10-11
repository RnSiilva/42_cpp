/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:08:33 by resilva           #+#    #+#             */
/*   Updated: 2025/10/07 23:48:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include "iostream"

class AAnimal
{
	protected:
		std::string	_type;

	public:
		// Constructors and Destructors
		AAnimal( void );
		// AAnimal( std::string type );
		AAnimal( const AAnimal &copy );
		virtual ~AAnimal( void );

		// Operators
		AAnimal	&operator=( const AAnimal &other );

		// Get/Set Functions
		std::string	getType( void ) const;
		void		setType( const std::string type );

		// Member functions
		virtual void	makeSound( void ) const = 0;
};

//std::ostream	&operator<<( std::ostream &out, const AAnimal &AAnimal );

#endif
