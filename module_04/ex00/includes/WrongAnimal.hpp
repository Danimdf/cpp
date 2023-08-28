/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 10:14:22 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
class WrongAnimal
{
	public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const std::string &name);
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal &operator=(WrongAnimal const &value);

    void setType(const std::string& type);
    std::string getType(void) const;
    void makeSound(void) const;

    protected:
    std::string _type;
};
#endif