/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:03:05 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/15 02:00:02 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
private:
	const Fixed	_x;
	const Fixed	_y;

public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point &other);
	~Point(void);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

Fixed	cross(const Point a, const Point b, const Point p);
bool	bsp(const Point a, const Point b, const Point c, const Point p);
