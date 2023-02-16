/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:36:04 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/16 01:17:59 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void Contact::setContact(Contact cont[], Contact newContact, int i)
{
	cont[i].index = newContact.index;
	cont[i].firstName = newContact.firstName;
	cont[i].lastName = newContact.lastName;
	cont[i].nickName = newContact.nickName;
	cont[i].phoneNumber = newContact.phoneNumber;
	cont[i].darkestSecret = newContact.darkestSecret;
}
