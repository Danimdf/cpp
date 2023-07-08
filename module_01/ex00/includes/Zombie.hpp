/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:16:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 12:41:39 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
class Zombie {

	public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce();
	Zombie* newZombie(std::string name);

	private:
	std::string _name;
};

Zombie	*newZombie(std::string const name);
void	randomChump(std::string const name);
#endif
