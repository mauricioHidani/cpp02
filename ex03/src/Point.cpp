/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:11:41 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/14 20:15:09 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):
	_x(0), _y(0) {
}

Point::Point(const float x, const float y):
	_x(x), _y(y) {
}

Point::Point(const Point &other):
	_x(other.getX()), _y(other.getY()) {
}

Point::~Point(void) {
}

Fixed	Point::getX(void) const {
	return _x;
}

Fixed	Point::getY(void) const {
	return _y;
}
