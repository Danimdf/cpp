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

void DisableSignals()
{
	for (int signum = 1; signum < NSIG; ++signum)
		signal(signum, SIG_IGN);
}

int main()
{
	PhoneBook phonebook;

	DisableSignals();
	phonebook.CheckInputStr();
}

