/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:56:00 by resilva           #+#    #+#             */
/*   Updated: 2025/12/27 00:27:58 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern() {}

AForm	*Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	AForm *Form[] = {
		new ShrubberyCreationForm(formTarget),
		new RobotomyRequestForm(formTarget),
		new PresidentialPardonForm(formTarget)
	};
	
	std::string arrayFormName[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm *returnForm = NULL;

	for(int i = 0; i < 3; i++)
	{
		if (Form[i]->getName() == arrayFormName[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			returnForm = Form[i];
		}
		else
			delete Form[i];
	}

	if (returnForm == NULL)
		std::cout << "Intern could not create " << formName << std::endl;
	return (returnForm);
}