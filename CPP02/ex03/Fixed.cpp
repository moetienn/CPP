/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:15:01 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 12:50:21 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTOR AND DESTRUCTOR */

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(int const value)
{
    _value = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
    _value = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
    return ;
}

int Fixed::toInt(void) const
{
    return (_value >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
    return (float)_value / (1 << _fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}

/* OPERATORS ARITHMETIQUE*/

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

/* OPERATOR COMPARAISON */

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->toFloat() > rhs.toFloat());
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->toFloat() < rhs.toFloat());
}

bool    Fixed::operator>=(Fixed const &rhs)
{
    return (this->toFloat() >= rhs.toFloat());
}

bool    Fixed::operator<=(Fixed const &rhs)
{
    return (this->toFloat() <= rhs.toFloat());
}

bool    Fixed::operator==(Fixed const &rhs)
{
    return (this->toFloat() == rhs.toFloat());
}

bool    Fixed::operator!=(Fixed const &rhs)
{
    return (this->toFloat() != rhs.toFloat());
}

/* OPERATOR INCREMENTATION */

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

/* STATIC FUNCTIONS */

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b ? a : b);
}

Fixed::~Fixed(void)
{
}
