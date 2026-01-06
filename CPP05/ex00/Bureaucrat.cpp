/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 22:59:19 by resilva           #+#    #+#             */
/*   Updated: 2025/12/11 21:47:05 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructors + Orthodox Canonical Form */
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	//std::cout << "create default Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) 
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "create Bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	std::cout << "create Bureaucrat copy of " << copy.getName() << std::endl;
	*this = copy;	
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "destroy Bureaucrat " << this->_name << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &other)
{
	std::cout << "Bureaucrat " << this->_name << " assigment to " << other.getGrade() << std::endl;
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

/* Getters */
std::string	Bureaucrat::getName(void) const { return (_name); }
int	Bureaucrat::getGrade(void) const { return (_grade); }

/* Grade Manipulation */
void	Bureaucrat::incrementGrade(void) 
{ 
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}
void	Bureaucrat::decrementGrade(void) 
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

/* Exceptions */
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

/* Overload of operator << */
std::ostream&	operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() 
	<< ", bureaucrat grade " 
	<< b.getGrade();
	return (out);
}
