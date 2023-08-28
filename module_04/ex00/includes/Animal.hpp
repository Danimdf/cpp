/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:47 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 22:04:16 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
class Animal
{
	public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const std::string &name);
	Animal(Animal const &copy);
	Animal &operator=(Animal const &value);

    void setType(const std::string& type);
    std::string getType(void) const;
    virtual void makeSound(void) const;

    protected:
    std::string _type;
};
#endif