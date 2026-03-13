/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:43:44 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/13 15:19:00 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):
	_value(0) {
}

Fixed::Fixed(const int nbr):
	_value(nbr << _fracBits) {
}

Fixed::Fixed(const float nbr):
	_value(static_cast<int>(roundf(nbr * (1 << _fracBits)))) {
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed::~Fixed(void) {
}

int	Fixed::getRawBits(void) const {
	return (_value);
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_value) / (1 << _fracBits));
}

int	Fixed::toInt(void) const {
	return (_value >> _fracBits);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1.getRawBits() < f2.getRawBits()) ? f1 : f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1.getRawBits() < f2.getRawBits()) ? f1 : f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1.getRawBits() > f2.getRawBits()) ? f1 : f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1.getRawBits() > f2.getRawBits()) ? f1 : f2;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_value = other._value;
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const {
	return (_value > other._value);
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (_value >= other._value);
}

bool	Fixed::operator<(const Fixed &other) const {
	return (_value < other._value);
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const {
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const {
	Fixed	result;
	result.setRawBits(_value + other._value);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const {
	Fixed	result;
	result.setRawBits(_value - other._value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other) const {
	Fixed	result;
	result.setRawBits((_value * other._value) >> _fracBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const {
	Fixed	result;
	result.setRawBits((_value << _fracBits) / other._value);
	return (result);
}

Fixed	&Fixed::operator++() {
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);
	_value++;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	_value--;
	return (temp);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
