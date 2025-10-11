/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:14:02 by resilva           #+#    #+#             */
/*   Updated: 2025/10/02 21:22:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;

public:
	//Constructors
	Fixed();
	Fixed( Fixed const &copy );
	Fixed( const int value );
	Fixed( const float value );
	~Fixed();

	//Overload
	Fixed	&operator=( const Fixed &other );

	//Getters and Setters
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	//Member functions
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);

#endif