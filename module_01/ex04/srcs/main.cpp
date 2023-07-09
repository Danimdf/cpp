/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/08 20:54:41 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SedReplace.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>

void checkInputs(std::int numArgs, std::string fileName,
std::string str1, std::string str2)
{
	if(fileName.empty() || str1.empty() || str2.empty())
	{
		std::cout << "Not found" << std::endl;
		std::exit(1);
	}
}

int main(int argc, char *argv[])
{
	SedReplace sed;

	if (numArgs != 4)
	{
		std::cout << "Invalid input! You need to provide a valid file name,"
		"a string for replacement, and the string you want to replace." << std::endl;
		std::exit(1);
	}
	checkInputs(argv[1], arg[2], argv[3]);
}
