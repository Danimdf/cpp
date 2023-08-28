/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:31 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 23:33:03 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include <string>

#ifndef DOG_HPP
# define DOG_HPP
class Dog : public Animal
{
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog(const std::string &name);
		Dog(Dog const &copy);
		Dog &operator=(Dog const &dog);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};
#endif