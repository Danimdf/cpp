/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:15:43 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 14:34:21 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setName("RANDOM_POKEMON");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Default constructor ScavTrap called." << std::endl;
	return;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Constructor with parameter name ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap()
{
	std::cout << "Copy constructor ScavTrap called." << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor from " << this->getName() << " ScavTrap called." << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	}
	std::cout << "Copy assignment operator ScavTrap called." << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " attacks " << target << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
	{
		if (this->getEnergyPoints() <= 0)
			std::cout << "ScavTrap " << this->getName() << ", has no energy points. This Guy is tired." << std::endl;
		if (this->getHitPoints() <= 0)
			std::cout << "ScavTrap " << this->getName() << ", has no hit points. This Guy is Dead!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (this->getHitPoints() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is Dead! It cannot enter Gate Keeper mode.";
	else if (this->getEnergyPoints() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is tired! It cannot enter Gate Keeper mode.";
	else
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " is now in Gate keeper mode." << std::endl;
	}
}
