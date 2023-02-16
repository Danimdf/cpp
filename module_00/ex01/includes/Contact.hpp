/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:22:38 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/16 23:53:23 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_H
# define CONTACT_H
class Contact {
	public:
		std::string index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		void SetContact(Contact cont[], Contact newContact, int i);
		void PrintContact(Contact contacts[], std::string index);
};

#endif
