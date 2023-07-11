/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:24:25 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/11 18:17:09 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef FIXED_HPP
# define FIXED_HPP
class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &value);
	Fixed &operator=(const Fixed &value);
	int getRawBits() const;
	void setRawBits(int const raw);

	private:
	int _fixed_point;
	static const int _frac_bits;
};
#endif