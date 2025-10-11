/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 20:21:49 by resilva           #+#    #+#             */
/*   Updated: 2025/10/05 11:29:50 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

#define RESET      "\033[0m"
#define RED        "\033[31m"
#define GREEN      "\033[32m"
#define YELLOW     "\033[33m"
#define BLUE       "\033[34m"
#define MAGENTA    "\033[35m"
#define CYAN       "\033[36m"
#define WHITE      "\033[37m"

// Helper macros para uso direto com <<
// Exemplo: std::cout << YELLOW_TEXT("ClapTrap") << std::endl;
#define RED_TEXT(x)        (std::string(RED) + x + RESET)
#define GREEN_TEXT(x)      (std::string(GREEN) + x + RESET)
#define YELLOW_TEXT(x)     (std::string(YELLOW) + x + RESET)
#define BLUE_TEXT(x)       (std::string(BLUE) + x + RESET)
#define MAGENTA_TEXT(x)    (std::string(MAGENTA) + x + RESET)
#define CYAN_TEXT(x)       (std::string(CYAN) + x + RESET)
#define WHITE_TEXT(x)      (std::string(WHITE) + x + RESET)
		
class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		// Constructors and Destructors
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &copy );
		~ClapTrap( void );

		// Operators
		ClapTrap	&operator=( const ClapTrap &other );
		
		// Get Functions
		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;
		
		// Member Functions
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

std::ostream&	operator<<( std::ostream &out, const ClapTrap &trap );

#endif
