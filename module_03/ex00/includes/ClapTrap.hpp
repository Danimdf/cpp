/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/18 20:18:45 by dmonteir         ###   ########.fr       */
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
	ClapTrap(const ClapTrap &value);
	ClapTrap &operator=(const ClapTrap &value);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	private:
	std::string _name;
	int _hit_points = 10;
	int _energy_points = 10;
	int _attack_damage = 0;
};
#endif