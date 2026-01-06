/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:55:57 by resilva           #+#    #+#             */
/*   Updated: 2025/12/14 21:48:10 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool	_isSigned;
		const int	_signGrade;
		const int	_execGrade;

	public:
		AForm();
		AForm(const std::string &name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &other);
		virtual ~AForm();

		std::string	getName() const;
		bool	getIsSigned() const;
		int		getSignGrade()const;
		int		getExecGrade() const;

		void	beSigned(const Bureaucrat &b);

		void	execute(Bureaucrat const &executor) const;
		virtual void	execute(void) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &Aform);

#endif