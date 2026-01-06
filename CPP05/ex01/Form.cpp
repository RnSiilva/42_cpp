/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:55:52 by resilva           #+#    #+#             */
/*   Updated: 2025/12/14 12:31:48 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	//std::cout << "create default Bureaucrat" << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	//std::cout << "Form constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	//std::cout << "create Form " << this->_name << " with sign-grade " << this->_signGrade << " and execution-grade " << this->_execGrade << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(copy.getIsSigned()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
}

Form& Form::operator=(const Form &other)
{
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

Form::~Form(void)
{
	std::cout << "destroy Form " << this->_name << std::endl;
}


const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::string Form::getName(void) const { return (_name); }
bool	Form::getIsSigned(void) const { return (_isSigned); }
int	Form::getSignGrade(void) const { return (_signGrade); }
int	Form::getExecGrade(void) const { return (_execGrade); }

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << std::boolalpha;
	out << "Form " << form.getName()
	<< " is signed: " << form.getIsSigned() 
	<< ", sign-grade: " << form.getSignGrade() 
	<< ", execution-grade: " << form.getExecGrade();
	return (out);
}
