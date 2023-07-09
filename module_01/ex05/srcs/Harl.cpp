/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:12:08 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 19:23:28 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>
#include <stdlib.h>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "----------------------------DEBUG----------------------------" << std::endl;
	std::cout
	<< "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-specialketchup"
	"burger. I really do!"
	<< std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "----------------------------INFO-----------------------------" << std::endl;
	std::cout
	<< "I cannot believe adding extra bacon "
	"costs more money. You didn’t put enough bacon in my burger! "
	"If you did, I wouldn’t be asking for more!"
	<< std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "----------------------------WARNING---------------------------" << std::endl;
	std::cout
	<< "I think I deserve to have some extra bacon for free."
	" I’ve been coming for years whereas you started working "
	"here since last month."
	<< std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "----------------------------ERROR----------------------------" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*pointerFunction[4])(void);
	pointerFunction[0] = &Harl::debug;
	pointerFunction[1] = &Harl::info;
	pointerFunction[2] = &Harl::warning;
	pointerFunction[3] = &Harl::error;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (str[i] == level)
		{
			(this->*pointerFunction[i])();
			return;
		}
	}
	std::cout << "Input invalid! Choose a level between DEBUG, INFO, WARNING, and ERROR." << std::endl;
	std::exit(EXIT_FAILURE);
}