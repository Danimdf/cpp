/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/12 20:56:08 by dmonteir         ###   ########.fr       */
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

	//methods 01
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

	//methods 02
	bool operator>(Fixed const &f) const;
	bool operator<(Fixed const &f) const;
	bool operator>=(Fixed const &f) const;
	bool operator<=(Fixed const &f) const;
	bool operator==(Fixed const &f) const;
	bool operator!=(Fixed const &f) const;
	Fixed operator+(Fixed const &f) const;
	Fixed operator-(const Fixed &f) const;
	Fixed operator*(const Fixed &f) const;
	Fixed operator/(const Fixed &f) const;
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);

	private:
	int _fixed_point;
	static const int _frac_bits = 8;
};
	std::ostream &operator<<(std::ostream& o, Fixed const& fixed);

#endif