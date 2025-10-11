/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 01:12:05 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 18:15:53 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
	public:
		// Constructors and Destructors
		ScavTrap( void );
		ScavTrap( const std::string &name );
		ScavTrap( const ScavTrap &copy );
		~ScavTrap( void );

		// Operators
		ScavTrap	&operator=( const ScavTrap &other );

		// Member functions
		void	attack( const std::string &target );
		void	guardGate( void );
};

#endif
