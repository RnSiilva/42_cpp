/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resilva <resilva@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:14:31 by resilva           #+#    #+#             */
/*   Updated: 2025/09/13 18:25:23 by resilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"
#include <unistd.h>

class Harl
{
	private:
		void	debug ( void );
		void	info ( void );
		void	warning ( void );
		void	error ( void );

	public:
		Harl();
		~Harl();

	void	complain( std::string level );
};

#endif