/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:40 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/02 23:33:10 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include <string>

#ifndef CAT_HPP
# define CAT_HPP
class Cat : public Animal
{
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat(const std::string &name);
		Cat(Cat const &copy);
		Cat &operator=(Cat const &cat);

		void makeSound(void) const;
		Brain* getBrain(void) const;

	private:
		Brain* _brain;
};
#endif