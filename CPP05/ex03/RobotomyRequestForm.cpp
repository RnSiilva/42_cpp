/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:19:45 by resilva           #+#    #+#             */
/*   Updated: 2025/12/26 22:47:23 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : \
	AForm(target, 72,45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : \
	AForm(copy), _target(copy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::execute(void) const
{
	static bool	isSeeded = false;

	if (!isSeeded)
	{
		std::srand(time(NULL));
		isSeeded = true;
	}
	std::cout << "Pru pru!!" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized";
	else
		std::cout << this->_target << " robotomy failed";
	std::cout << std::endl;
}
