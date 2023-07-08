/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:21:12 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 19:44:18 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
class HumanA
{
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;

	private:
	std::string _name;
	Weapon* _weapon;
};

#endif
