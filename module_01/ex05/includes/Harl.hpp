/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:12:02 by dmonteir          #+#    #+#             */
/*   Updated: 2023/07/09 18:56:07 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>

#ifndef HARL_HPP
# define HARL_HPP
class Harl
{
	public:
	Harl();
	~Harl();
	void complain( std::string level );

	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};
#endif