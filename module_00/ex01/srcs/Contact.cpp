/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:36:04 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/02/18 17:17:40 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <iostream>

std::string Contact::GetInput()
{
	PhoneBook phonebook;
	std::string input;

	while(getline(std::cin, input))
	{
		if(input != "")
			break;
		else if (input == "\n")
			phonebook.Print("Please fill in the field in your phonebook.");
		else
			phonebook.Print("Please fill in the field in your phonebook.");
	}
	return input;
}

void Contact::SetFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::SetLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::SetNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::SetPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::SetDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::SetIndex(std::string index)
{
	this->index = index;
}

std::string Contact::GetIndex() {
	return index;
}

std::string Contact::GetFirstName() {
	return firstName;
}

std::string Contact::GetLastName() {
	return lastName;
}

std::string Contact::GetNickName() {
	return nickName;
}

std::string Contact::GetPhoneNumber() {
	return phoneNumber;
}

std::string Contact::GetDarkestSecret() {
	return darkestSecret;
}
