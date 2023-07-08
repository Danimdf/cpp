/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:15:57 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 19:59:19 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP
class Weapon
{
	public:
	Weapon(std::string type);
	const std::string &getType() const;
	void setType(std::string type);

	private:
	std::string _type;
};
#endif
