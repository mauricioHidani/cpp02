/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:41:18 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/11 16:05:41 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_fracBits = 8;

public:
	Fixed(void);
	Fixed(const int &nbr);
	Fixed(const float &nbr);
	Fixed(const Fixed &ohter);
	~Fixed(void);
	
	Fixed &operator=(const Fixed &obj);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);
