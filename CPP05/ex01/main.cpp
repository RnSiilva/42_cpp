/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:51:53 by resilva           #+#    #+#             */
/*   Updated: 2025/12/14 12:28:59 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) 
{
    try {
        Bureaucrat a("Renan", 5);
        std::cout << a << std::endl;

        a.incrementGrade(); // vai lançar GradeTooHighException

		Form	f("form", 10, 10);
		a.signForm(f);
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

	std::cout << std::endl;

    try {
        Bureaucrat b("Joao", 200); // vai lançar no construtor
		// Nem vai executar o codigo abaixo, ja que 200 ultrapassa o limite, throw sera lançado
		std::cout << b << std::endl;

        b.incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

	return (0);
}