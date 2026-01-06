/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 22:58:53 by resilva           #+#    #+#             */
/*   Updated: 2025/12/06 18:07:02 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		// Constructors + Orthodox Canonical Form
		Bureaucrat(); // Default constructor
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy); // Copy constructor
		~Bureaucrat(); // Destructor
		Bureaucrat	&operator=(const Bureaucrat &other); // Assignment operator

		// Getters
		std::string	getName(void) const;
		int	getGrade(void) const;

		// Grade manipulation
		void	incrementGrade(); // grade--;
		void	decrementGrade(); // grade++;

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

// Overload of operator <<
std::ostream&	operator<<( std::ostream &out, const Bureaucrat &b);

#endif
