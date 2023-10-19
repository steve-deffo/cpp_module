/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:42:49 by desteve           #+#    #+#             */
/*   Updated: 2023/06/30 23:32:50 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructeurs
Fixed::Fixed(void)
	: _fixedPoint(0)
{
}

Fixed::Fixed(int const val)
	: _fixedPoint(val << fraction)
{
}

Fixed::Fixed(float const val)
	: _fixedPoint(int(roundf(val * (1 << fraction))))
{
}

Fixed::Fixed(const Fixed& fixed)
	: _fixedPoint(fixed._fixedPoint)
{
}

//Destructor
Fixed::~Fixed(void)
{
}

//Opérateur d'assignation
Fixed& Fixed::operator=(const Fixed& rhs)
{
	this->_fixedPoint = rhs._fixedPoint;
	return *this;
}

//Opérateurs de comparaison
bool Fixed::operator>(const Fixed& rhs)
{
	return this->_fixedPoint > rhs._fixedPoint;
}

bool Fixed::operator<(const Fixed& rhs)
{
	return this->_fixedPoint < rhs._fixedPoint;
}

bool Fixed::operator>=(const Fixed& rhs)
{
	return this->_fixedPoint >= rhs._fixedPoint;
}

bool Fixed::operator<=(const Fixed& rhs)
{
	return this->_fixedPoint <= rhs._fixedPoint;
}

bool Fixed::operator==(const Fixed& rhs)
{
	return this->_fixedPoint == rhs._fixedPoint;
}

bool Fixed::operator!=(const Fixed& rhs)
{
	return this->_fixedPoint != rhs._fixedPoint;
}

//Opérateurs arithmétiques
Fixed Fixed::operator+(const Fixed& rhs)
{
	Fixed ret;

	ret.setRawBits(this->_fixedPoint + rhs._fixedPoint);
	return ret;
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	Fixed ret;

	ret.setRawBits(this->_fixedPoint - rhs._fixedPoint);
	return ret;
}

Fixed Fixed::operator*(const Fixed& rhs)
{
	Fixed ret;

	ret.setRawBits(this->_fixedPoint * rhs._fixedPoint >> fraction);
	return ret;
}

Fixed Fixed::operator/(const Fixed& rhs)
{
	Fixed ret;

	ret.setRawBits((this->_fixedPoint * (1 << fraction)) / rhs._fixedPoint);
	return ret;
}

//incrémenteurs/décrémenteurs
Fixed& Fixed::operator++()
{
	this->_fixedPoint++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_fixedPoint--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

// Fonctions des membres
int Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return float(this->_fixedPoint) / (1 << fraction);
}

int Fixed::toInt(void) const
{
	return this->_fixedPoint >> fraction;
}

// Fonctions membres statiques
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixedPoint > b._fixedPoint)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixedPoint < b._fixedPoint)
		return b;
	return a;
}

//Surcharge de l'opérateur de flux de sortie
std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}