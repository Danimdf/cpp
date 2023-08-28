/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:14:40 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 10:45:46 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Brain.hpp"
#include <string>

#ifndef CAT_HPP
# define CAT_HPP
class Cat : public AAnimal
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