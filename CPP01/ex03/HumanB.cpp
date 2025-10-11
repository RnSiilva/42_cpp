/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 21:50:19 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 12:15:27 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(std::string n) : _name(n), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

void	HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " does not have weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their "
				<< _weapon->getType() << std::endl;
}