/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/11 19:49:01 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#ifndef FIXED_HPP
# define FIXED_HPP
class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &value);
	Fixed(const int value);
	Fixed &operator=(const Fixed &value);
	Fixed(float const value);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;


	private:
	int _fixed_point;
	static const int _frac_bits = 8;
};
	std::ostream &operator<<(std::ostream& o, Fixed const& fixed);

#endif