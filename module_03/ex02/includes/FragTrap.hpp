/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:15:43 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/23 16:02:44 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <string>

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(const FragTrap &value);

	void attack(const std::string &target);
	void highFivesGuys(void);
};
#endif