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
		input = contact.GetInput();
		if (!input.compare("ADD"))
		{
			phonebook.AddContact(numberContact);
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

