/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:22:38 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/18 17:19:19 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_H
# define CONTACT_H
class Contact {
	public:
		void SetContact(Contact cont[], Contact newContact, int i);
		std::string GetInput();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();
		std::string GetIndex();
		void SetFirstName(std::string firstName);
		void SetLastName(std::string lastName);
		void SetNickName(std::string nickname);
		void SetPhoneNumber(std::string phoneNumber);
		void SetDarkestSecret(std::string darkestSecret);
		void SetIndex(std::string index);

	private:
		std::string index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
