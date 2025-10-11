/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:14:02 by resilva           #+#    #+#             */
/*   Updated: 2025/10/04 18:35:45 by resilva          ###   ########.fr       */
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

	//Comparison operators
	bool	operator>( Fixed const &other ) const ;
	bool	operator<( Fixed const &other ) const ;
	bool	operator>=( Fixed const &other ) const ;
	bool	operator<=( Fixed const &other ) const ;
	bool	operator==( Fixed const &other ) const ;
	bool	operator!=( Fixed const &other ) const ;

	//Arithmetic operators
	Fixed	operator+( Fixed const &other ) const;
	Fixed	operator-( Fixed const &other ) const;
	Fixed	operator*( Fixed const &other ) const;
	Fixed	operator/( Fixed const &other ) const;

	//Increment/Decrement operators
	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );

	//Min and Man member function
	static const Fixed	&min( const Fixed &x, const Fixed &y );
	static Fixed		&min( Fixed &x, Fixed &y );
	static const Fixed	&max( const Fixed &x, const Fixed &y );
	static Fixed		&max( Fixed &x, Fixed &y );

	//Overload
	Fixed	&operator=( Fixed const &other );

	//Getters and Setters
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	//Member functions
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);

#endif