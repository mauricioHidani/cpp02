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

class Fixed
{
private:
	int					_value;
	static const int	_fracBits;

public:
	Fixed(void);
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits( int const raw );
};
