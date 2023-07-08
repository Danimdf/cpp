/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:15:21 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 19:56:50 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}

void HumanB::attack() const
{
	if (this->_weapon)
		std::cout<< this->_name << " attacks with their " <<
		this->_weapon->getType()<<std::endl;
	else
		std::cout<< this->_name << " is unarmed, looks like someone is going to get hurt " <<
		 this->_weapon->getType()<<std::endl;

}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

