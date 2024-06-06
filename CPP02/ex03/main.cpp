/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:13:57 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 11:58:17 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);
    Point point1(2, 1);

    // The point is inside the triangle
    if (point1.bsp(a, b, c, point1) == true)
        std::cout << "Point 1 is inside the triangle" << std::endl;
    else
        std::cout << "Point 1 is outside the triangle" << std::endl;
    
    // The point is outside the triangle
    Point point2(5, 5);
    if (point2.bsp(a, b, c, point2) == true)
        std::cout << "Point 2 is inside the triangle" << std::endl;
    else
        std::cout << "Point 2 is outside the triangle" << std::endl;

    // The point is one the summit of the triangle
    Point point3(0, 4);
    if (point3.bsp(a, b, c, point3) == true)
        std::cout << "Point 3 is inside the triangle" << std::endl;
    else
        std::cout << "Point 3 is outside the triangle" << std::endl;

    // The point is on the edge of the triangle
    Point point4(2, 0);
    if (point4.bsp(a, b, c, point4) == true)
        std::cout << "Point 4 is inside the triangle" << std::endl;
    else
        std::cout << "Point 4 is outside the triangle" << std::endl;

    return (0);
}