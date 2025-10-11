/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:21:44 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 00:52:38 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " is born! 🤖" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "ClapTrap constructor with parameter called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " is born! 🤖" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << std::endl;
	std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " was destroyed" << std::endl;
}

// --------------------------- OPERATOR FUNCTIONS -----------------------------
ClapTrap	&ClapTrap::operator=( const ClapTrap &other )
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

std::ostream&	operator<<( std::ostream &out, const ClapTrap &trap )
{
	out << "🤖 " << CYAN_TEXT(trap.getName())
		<< " | HP: " << trap.getHitPoints()
		<< " | Energy: " << trap.getEnergyPoints()
		<< " | Damage: " << trap.getAttackDamage();
	return (out);
}

// ------------------------------ GET FUNCTIONS -------------------------------
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

// ---------------------------- MEMBER FUNCTIONS ------------------------------
void	ClapTrap::attack( const std::string &target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name)
				  << " cannot attack -- it's dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name)
				  << " has no energy left to attack!" << std::endl;
		return ;
	}

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name)
				  << " cannot take damage -- it's dead!" << std::endl;
		return ;
	}

	if ((int)amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
		
	std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " took " << amount 
			<< " points of damage" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name)
				  << " cannot be repaired -- it's dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << CYAN_TEXT(this->_name)
				  << " has no energy left to repair!" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	
	std::cout << "ClapTrap " << CYAN_TEXT(this->_name) << " repaired itself for " 
			<< amount << " HP!" << std::endl;
}
