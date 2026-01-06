/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:55:52 by resilva           #+#    #+#             */
/*   Updated: 2025/12/14 20:36:20 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	//std::cout << "create default Bureaucrat" << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	//std::cout << "AForm constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	//std::cout << "create AForm " << this->_name << " with sign-grade " << this->_signGrade << " and execution-grade " << this->_execGrade << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _isSigned(copy.getIsSigned()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
}

AForm& AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "destroy AForm " << this->_name << std::endl;
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("The form was not signed!");
}

std::string AForm::getName(void) const { return (_name); }
bool	AForm::getIsSigned(void) const { return (_isSigned); }
int	AForm::getSignGrade(void) const { return (_signGrade); }
int	AForm::getExecGrade(void) const { return (_execGrade); }

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_execGrade)
		throw AForm::GradeTooLowException();
	if (!this->_isSigned)
		throw AForm::FormNotSignedException();
	this->execute();
}

std::ostream	&operator<<(std::ostream &out, const AForm &AForm)
{
	out << std::boolalpha;
	out << "AForm " << AForm.getName()
	<< " is signed: " << AForm.getIsSigned() 
	<< ", sign-grade: " << AForm.getSignGrade() 
	<< ", execution-grade: " << AForm.getExecGrade();
	return (out);
}
