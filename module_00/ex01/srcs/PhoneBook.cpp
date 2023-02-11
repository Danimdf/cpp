/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:35:49 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/11 23:44:59 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>

void PhoneBook::Print(std::string phrase)
{
	std::cout << phrase << std::endl;
}

void PhoneBook::Add(Contact newContact, int i){
	if (i > 7)
	{
		contact[7].name = newContact.name;
		contact[7].number = newContact.number;
	}
	contact[i].name = newContact.name;
	contact[i].number = newContact.number;
}

void PhoneBook::Search() {
	
}

bool PhoneBook::ExitPhone() {
	std::exit(1);
}
