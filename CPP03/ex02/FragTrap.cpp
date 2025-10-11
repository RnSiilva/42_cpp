/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:18:37 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 19:31:01 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//
FragTrap::FragTrap( void )
{
	std::cout << "🟡 FragTrap constructor default called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << YELLOW_TEXT(this->_name) 
		<< " rises from the factory floor! ⚙️" << std::endl;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap( name )
{
	std::cout << "🟡 FragTrap parameterized constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << YELLOW_TEXT(this->_name) 
		<< " enters the arena -- ready to blast! 💥" << std::endl;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap( copy )
{
	std::cout << "🟡 FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "💀 FragTrap " << YELLOW_TEXT(this->_name) 
		<< " has been dismantled... until next time! 🧩" << std::endl;
}

//
FragTrap&	FragTrap::operator=( const FragTrap &other )
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

//
void	FragTrap::attack( const std::string &target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "💀 FragTrap " << YELLOW_TEXT(this->_name)
				  << " cannot attack -- it's dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "⚠️ FragTrap " << YELLOW_TEXT(this->_name)
				  << " has no energy left to attack!" << std::endl;
		return ;
	}

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "💣 FragTrap " << YELLOW_TEXT(this->_name) << " launches an explosive at " << target
			<< ", dealing " << this->_attackDamage << " damage! 💥" << std::endl;
	}
}
void	FragTrap::highFivesGuys( void )
{
	std::cout << "✋ FragTrap " << YELLOW_TEXT(this->_name) << " requests a high five! Let’s celebrate the chaos! 😎" << std::endl;
}

