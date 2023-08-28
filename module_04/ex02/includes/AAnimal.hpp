/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:21:13 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 10:41:40 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
class AAnimal
{
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const std::string &name);
		AAnimal(AAnimal const &copy);
		AAnimal &operator=(AAnimal const &value);

		void setType(const std::string& type);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

    protected:
    	std::string _type;
};
#endif