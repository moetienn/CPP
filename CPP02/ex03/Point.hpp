/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:24:07 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 11:27:30 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

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

        float   getX(void) const;
        float   getY(void) const;
        bool    bsp(Point const a, Point const b, Point const c, Point const point);
} ;

#endif