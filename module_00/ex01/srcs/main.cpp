/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:33:21 by Dmonteir          #+#    #+#             */
/*   Updated: 2023/06/28 00:37:03 by Dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

#include <string>
#include <csignal>
#include <stdlib.h>


std::string GetInput()
{
	PhoneBook phonebook;
	std::string input;

	while(getline(std::cin, input))
	{
		if(input != "")
			break;
		else
			phonebook.Print("Please fill in the field in your phonebook.");
	}
	return input;
}

void CheckInputStr()
{
	std::string input;
	PhoneBook phonebook;
	Contact contact;
	int numberContact = 0;
	while (1)
	{
		if(std::cin.eof())
		{
			phonebook.Print("The command 'EOF' indicates the end of the input or file. The program will be closed as requested.");
			exit(0);
		}
		phonebook.Print("*************************************************************");
		phonebook.Print("Hello, this is your Phonebook. You can choose from three actions: ADD, SEARCH, and EXIT!");
		input = GetInput();
		if (!input.compare("ADD"))
		{
			phonebook.Print("Adding a contact. First name:");
			contact.firstName = GetInput();
			phonebook.Print("Last name:");
			contact.lastName = GetInput();
			phonebook.Print("NickName:");
			contact.nickName = GetInput();
			phonebook.Print("Phone number:");
			contact.phoneNumber = GetInput();
			phonebook.Print("A darkest secret:");
			contact.darkestSecret = GetInput();
			phonebook.Add(contact, numberContact);
			numberContact++;
		}
		else if (!input.compare("SEARCH"))
			phonebook.Search("");
		else if (!input.compare("EXIT"))
			phonebook.ExitPhone();
		else
			phonebook.Print("Please enter the action word correctly! Remember to use capital letters!");
	}
}

void DisableSignals()
{
	for (int signum = 1; signum < NSIG; ++signum)
		signal(signum, SIG_IGN);
}

int main()
{
	DisableSignals();
	CheckInputStr();
}

