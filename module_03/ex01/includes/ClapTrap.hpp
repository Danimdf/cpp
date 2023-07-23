/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 12:30:24 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
class ClapTrap
{
	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(const ClapTrap &value);

	void setName(std::string const &name);
	void setHitPoints(int hitPoints);
	void setEnergyPoints(int energy);
	void setAttackDamage(int attack);
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};
#endif