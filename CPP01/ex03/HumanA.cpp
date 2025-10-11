/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:27:28 by resilva           #+#    #+#             */
/*   Updated: 2025/09/09 22:20:26 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " 
			<< this->_weapon.getType() << std::endl;
}