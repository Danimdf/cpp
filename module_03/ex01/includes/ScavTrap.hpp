/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:12:20 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 14:35:27 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <string>

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(const ScavTrap &value);

	void attack(const std::string &target);
	void guardGate();
};
#endif