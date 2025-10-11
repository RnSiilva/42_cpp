/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 01:12:10 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 18:18:00 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ------------------------------ CONSTRUCTORS -------------------------------- 
ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << CYAN_TEXT(_name)
		<< " joins the battle! ⚔️" << std::endl;
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap( name )
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << CYAN_TEXT(_name)
		<< " joins the battle! ⚔️" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap( copy )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << std::endl;
	std::cout << "ScavTrap " << CYAN_TEXT(this->_name) << " shutting down… 💀" << std::endl;
}
// --------------------------- OPERATOR FUNCTIONS -----------------------------
ScavTrap	&ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	ScavTrap::attack( const std::string &target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << CYAN_TEXT(this->_name)
				  << " cannot attack -- it's dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << CYAN_TEXT(this->_name)
				  << " has no energy left to attack!" << std::endl;
		return ;
	}

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << CYAN_TEXT(this->_name) << " aggressively attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << CYAN_TEXT(this->_name) << " is in Gatekeeper mode!" << std::endl;
}
