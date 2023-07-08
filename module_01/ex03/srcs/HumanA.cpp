/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:15:24 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 19:55:29 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout<< this->_name << " attacks with their " <<
	this->_weapon->getType()<<std::endl;
}