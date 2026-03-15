/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:09:53 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/15 01:54:44 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	cross(const Point a, const Point b, const Point p) {
	return (
		  (b.getX() - a.getX()) * (p.getY() - a.getY())
		- (b.getY() - a.getY()) * (p.getX() - a.getX())
	);
}

bool	bsp(const Point a, const Point b, const Point c, const Point p) {
	Fixed	d1 = cross(a, b, p);
	Fixed	d2 = cross(b, c, p);
	Fixed	d3 = cross(c, a, p);

	bool	neg = (d1 < Fixed(0)) || (d2 < Fixed(0)) || (d3 < Fixed(0));
	bool	pos = (d1 > Fixed(0)) || (d2 > Fixed(0)) || (d3 > Fixed(0));
	bool	eqa = (d1 == Fixed(0)) || (d2 == Fixed(0)) || (d3 == Fixed(0));

	return !(neg && pos) && !eqa;
}
