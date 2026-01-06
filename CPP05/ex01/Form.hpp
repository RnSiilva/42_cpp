/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:55:57 by resilva           #+#    #+#             */
/*   Updated: 2025/12/12 22:16:18 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool	_isSigned;
		const int	_signGrade;
		const int	_execGrade;

	public:
		Form();
		Form(const std::string &name, int signGrade, int execGrade);
		Form(const Form &copy);
		Form	&operator=(const Form &other);
		~Form();

		std::string	getName() const;
		bool	getIsSigned() const;
		int		getSignGrade()const;
		int		getExecGrade() const;

		void	beSigned(const Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif