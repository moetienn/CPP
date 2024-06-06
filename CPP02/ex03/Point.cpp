/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:23:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 12:51:41 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{
}

Point &Point::operator=(Point const &rhs)
{
    if (this != &rhs)
    {
        this->_x = rhs._x;
        this->_y = rhs._y;
    }
    return (*this);
}

Fixed   Point::getX(void) const
{
    return (Fixed(_x));
}

Fixed   Point::getY(void) const
{
    return (Fixed(_y));
}

Fixed   area(Point a, Point b, Point c)
{
    return (Fixed((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2).toFloat());
}

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (a.getX() == point.getX() && a.getY() == point.getY())
        return (false);
    if (b.getX() == point.getX() && b.getY() == point.getY())
        return (false);
    if (c.getX() == point.getX() && c.getY() == point.getY())
        return (false);
    Fixed   A = area(a, b, c);
    Fixed   A1 = area(point, b, c);
    if (A1 < 0)
        A1 = A1 * -1;
    Fixed   A2 = area(a, point, c);
    if (A2 < 0)
        A2 = A2 * -1;
    Fixed   A3 = area(a, b, point);
    if (A3 < 0)
        A3 = A3 * -1;
    if (A1 == 0 || A2 == 0 || A3 == 0)
        return (false);
    return (A == A1 + A2 + A3);
}

Point::~Point(void)
{
}