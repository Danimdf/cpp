/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:31 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 22:04:07 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

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
};
#endif