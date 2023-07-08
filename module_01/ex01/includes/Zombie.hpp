/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:16:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 16:31:01 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
class Zombie {

	public:
	Zombie(void);
	~Zombie(void);
	void announce();
	void setZombieName(std::string name);

	private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
