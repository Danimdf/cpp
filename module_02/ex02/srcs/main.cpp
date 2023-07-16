/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:04:55 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/16 10:31:38 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "My tests:" << std::endl;
	Fixed c(77);
	Fixed d(5.32f);
	a = c;

	std::cout << "Arithmetic operators" << std::endl;
	Fixed e = c + a;
	std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << std::endl;
	std::cout << e << std::endl;
	e = b - d;
	std::cout << e << std::endl;
	e = c * a;
	std::cout << e << std::endl;
	e = c / d;
	std::cout << e << std::endl;

	Fixed f = 77;
	std::cout << "Increment and decrement operators" << std::endl;
	std::cout << "++c: " << ++c << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "d++: " << d++ << std::endl;
	std::cout << "--e: " << --e << std::endl;

	std::cout << "Comparison operators" << std::endl;
	std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e <<  " f = " << f << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "e >= a: " << (e >= a) << std::endl;
	std::cout << "d <= b: " << (d <= b) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "c == f: " << (c == f) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;

	std::cout << "Int and float conversion" << std::endl;
	float floatValue = a.toFloat();
	int intValue = d.toInt();
	std::cout << "a to float: " << floatValue << std::endl;
	std::cout << "d to int: " << intValue << std::endl;

	std::cout << "Min and Max" << std::endl;
	Fixed x(546);
	Fixed y(66);
	Fixed min = Fixed::min(x, y);
	std::cout << "min(x, y): " << min << std::endl;
	Fixed max = Fixed::max(x, y);
	std::cout << "max(x, y): " << max << std::endl;

	return 0;
}
