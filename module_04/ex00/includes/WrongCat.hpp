/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:10 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 21:56:43 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const std::string &name);
	WrongCat(WrongCat const &copy);
	WrongCat &operator=(WrongCat const &value);

    void makeSound(void) const;
};
#endif