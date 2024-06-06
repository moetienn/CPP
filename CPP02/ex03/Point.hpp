/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:24:07 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 12:49:20 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        float _x;
        float _y;
    public:
        Point(void);
        Point(float const x, float const y);
        Point(Point const &src);
        Point &operator=(Point const &rhs);
        ~Point(void);

        Fixed   getX(void) const;
        Fixed   getY(void) const;
        bool    bsp(Point const a, Point const b, Point const c, Point const point);
} ;

#endif