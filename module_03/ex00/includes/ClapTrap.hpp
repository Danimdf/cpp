/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/19 21:02:04 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

#ifndef FIXED_HPP
# define FIXED_HPP
class ClapTrap
{
	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string &value);
	ClapTrap(ClapTrap const& copy);
	ClapTrap &operator=(const ClapTrap &value);

	void setName(std::string const &name);
	void setHitPoints(int hitPoints);
	void setEnergyPoints(int energy);
	void setAttackDamage(int attack);
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};
#endif