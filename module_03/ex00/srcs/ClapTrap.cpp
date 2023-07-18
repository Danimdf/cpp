/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:23:08 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/18 20:19:05 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &value)
{
	*this = value;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &value)
{
	if (this != &value)
	{
		this->_ClapTrap_point = value.getRawBits();
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << ClapTrap <nome> ataca <alvo>, causando <dano> pontos de dano! << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
