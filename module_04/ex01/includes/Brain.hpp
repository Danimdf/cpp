/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:19:29 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/08/04 10:18:17 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef BRAIN_HPP
# define BRAIN_HPP
class Brain
{
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(Brain const &copy);
		Brain &operator=(Brain const &brain);

		std::string getIdeas(int i) const;
		void setIdeas(int i, std::string ideas);
		std::string _ideas[100];
};
#endif