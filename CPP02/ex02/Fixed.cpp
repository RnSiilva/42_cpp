/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:13:57 by resilva           #+#    #+#             */
/*   Updated: 2025/10/04 18:36:06 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ------------------------------ CONSTRUCTORS --------------------------------
Fixed::Fixed( void ) 
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( Fixed const &copy )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int value )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = value << Fixed::_bits;
}

Fixed::Fixed( const float value )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf( value * (1 << Fixed::_bits) );
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

// -------------------------- COMPARISON OPERATORS ----------------------------
bool	Fixed::operator>( Fixed const &other ) const 
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<( Fixed const &other ) const 
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=( Fixed const &other ) const 
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=( Fixed const &other ) const 
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==( Fixed const &other ) const 
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=( Fixed const &other ) const 
{
	return (this->getRawBits() != other.getRawBits());
}

// -------------------------- ATITHMETIC OPERATORS ----------------------------
Fixed	Fixed::operator+( Fixed const &other ) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-( Fixed const &other ) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*( Fixed const &other ) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/( Fixed const &other ) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator=( const Fixed &other )
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);
}

// ---------------------- INCREMENT/DECREMENT OPERATORS -----------------------
Fixed	&Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old = *this;
	this->_value++;
	return (old);
}

Fixed	&Fixed::operator--( void )
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old = *this;
	this->_value--;
	return (old);
}

// ---------------------------- MIN/MAX FUNCTIONS -----------------------------
const Fixed	&Fixed::min( const Fixed &x, const Fixed &y )
{
	return (x < y ? x : y);
}

Fixed	&Fixed::min( Fixed &x, Fixed &y )
{
	return (x < y ? x : y);
}

const Fixed	&Fixed::max( const Fixed &x, const Fixed &y )
{
	return (x > y ? x : y);
}

Fixed	&Fixed::max( Fixed &x, Fixed &y )
{
	return (x > y ? x : y);
}

// -------------------------- GETTERS AND SETTERS -----------------------------
int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

// ---------------------------- CONVERT FUNCTIONS -----------------------------
float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->_value / (1 << Fixed::_bits));
}

// ------------------------------ AUX FUNCTIONS -------------------------------
std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat(); //converte p/ float e joga no fluxo
	return (out); //devolve a referencia para encadear << <<
}



