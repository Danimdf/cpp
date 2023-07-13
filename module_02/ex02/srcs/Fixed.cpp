/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:23:08 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/12 21:01:59 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed()
{
	this->_fixed_point = 0;
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int value)
{
	this->_fixed_point = (value << this->_frac_bits);
}

Fixed::Fixed(float const value)
{
	this->_fixed_point = (int)roundf(value * (1 << this->_frac_bits));
}

Fixed &Fixed::operator=(const Fixed &value)
{
	if (this != &value)
	{
		this->_fixed_point = value.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->getRawBits() / ((float)(1 << this->_frac_bits)));
}

int Fixed::toInt() const
{
	return (this->_fixed_point >> this->_frac_bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}

bool Fixed::operator>(Fixed const &f) const
{
	return (this->_fixed_point > f.getRawBits());
}

bool Fixed::operator<(Fixed const &f) const
{
	return (this->_fixed_point < f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f) const
{
	return (this->_fixed_point >= f.getRawBits());
}

bool Fixed::operator<=(Fixed const &f) const
{
	return (this->_fixed_point <= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f) const
{
	return (this->_fixed_point == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f) const
{
	return (this->_fixed_point != f.getRawBits());
}

Fixed Fixed::operator+(Fixed const &f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
	return Fixed(this->toFloat() / f.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->_fixed_point += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixed_point -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed aux(*this);
	this->_fixed_point++;
	return (aux);
}

Fixed Fixed::operator--(int)
{
	Fixed aux(*this);
	this->_fixed_point--;
	return (aux);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a <= b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a >= b ? a : b);
}
