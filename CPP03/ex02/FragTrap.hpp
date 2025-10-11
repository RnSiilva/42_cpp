/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:18:28 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 18:52:10 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string &name);
		FragTrap( const FragTrap &copy );
		~FragTrap();

		FragTrap	&operator=( const FragTrap &other );

		void	attack( const std::string &target );
		void	highFivesGuys( void );
};

#endif