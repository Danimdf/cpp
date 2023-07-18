/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:54:44 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 19:54:48 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string hi =  "HI THIS IS BRAIN";
	std::string *stringPTR = &hi;
	std::string &stringREF = hi;

	std::cout << "Memory Address of var: " << &hi << std::endl;
	std::cout << "Memory Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of var: " << hi << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
}
