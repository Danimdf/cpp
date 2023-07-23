/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap .cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:15:43 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 16:02:17 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setName("RANDOM_POKEMON");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Default constructor FragTrap called." << std::endl;
	return;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Constructor with parameter name FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap()
{
	std::cout << "Copy constructor FragTrap called." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor from " << this->getName() << " FragTrap called." << std::endl;
	return;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	}
	std::cout << "Copy assignment operator FragTrap called." << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " attacks " << target << ", causing " << this->getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else
	{
		if (this->getEnergyPoints() <= 0)
			std::cout << "FragTrap " << this->getName() << ", has no energy points. This Guy is tired." << std::endl;
		if (this->getHitPoints() <= 0)
			std::cout << "FragTrap " << this->getName() << ", has no hit points. This Guy is Dead!" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	if (this->getHitPoints() <= 0)
		std::cout << "FragTrap " << this->getName() << " is Dead! It cannot enter Gate Keeper mode.";
	else if (this->getEnergyPoints() <= 0)
		std::cout << "FragTrap " << this->getName() << " is tired! It cannot enter Gate Keeper mode.";
	else
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " High Five!!! CLAP CLAP" << std::endl;
	}
}
