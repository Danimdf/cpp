/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 19:28:41 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("ABRAÇO");
	return 0;
}
