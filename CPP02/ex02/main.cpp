/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:13:57 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/06 10:21:05 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return (0);
}

// int main(void)
// {
//     Fixed a;
//     Fixed b(5.05f);
//     Fixed c(2);
//     Fixed result = b * c;

//     std::cout << "Initial value of a: " << a << std::endl;
//     std::cout << "Value of b: " << b << std::endl;
//     std::cout << "Value of c: " << c << std::endl;
//     std::cout << "Result of b * c: " << result << std::endl;

//     std::cout << "Incrementing a: " << ++a << std::endl;
//     std::cout << "Value of a after increment: " << a << std::endl;

//     std::cout << "Decrementing a: " << --a << std::endl;
//     std::cout << "Value of a after decrement: " << a << std::endl;

//     std::cout << "Max of a and result: " << Fixed::max(a, result) << std::endl;
//     std::cout << "Min of a and result: " << Fixed::min(a, result) << std::endl;

//     if (c != 0)
//     {
//         Fixed result2 = b / c;
//         std::cout << "Result of b / c: " << result2 << std::endl;
//     }
//     else
//     {
//         std::cout << "Division by zero is not allowed" << std::endl;
//     }
//     Fixed result3 = b + c;
//     std::cout << "Result of b + c: " << result3 << std::endl;

//     Fixed result4 = b - c;
//     std::cout << "Result of b - c: " << result4 << std::endl;

//     Fixed d(10.5f);
//     Fixed e(10.5f);
//     Fixed f(20.0f);

//     std::cout << "Value of d: " << d << std::endl;
//     std::cout << "Value of e: " << e << std::endl;
//     std::cout << "Value of f: " << f << std::endl;

//     std::cout << "Is d < e ? " << (d < e ? "Yes" : "No") << std::endl;
//     std::cout << "Is d <= e ? " << (d <= e ? "Yes" : "No") << std::endl;
//     std::cout << "Is d > e ? " << (d > e ? "Yes" : "No") << std::endl;
//     std::cout << "Is d >= e ? " << (d >= e ? "Yes" : "No") << std::endl;

//     std::cout << "Is d < f ? " << (d < f ? "Yes" : "No") << std::endl;
//     std::cout << "Is d <= f ? " << (d <= f ? "Yes" : "No") << std::endl;
//     std::cout << "Is d > f ? " << (d > f ? "Yes" : "No") << std::endl;
//     std::cout << "Is d >= f ? " << (d >= f ? "Yes" : "No") << std::endl;

//     std::cout << "Is d == e ? " << (d == e ? "Yes" : "No") << std::endl;
//     std::cout << "Is d == f ? " << (d == f ? "Yes" : "No") << std::endl;
//     std::cout << "Is d != e ? " << (d != e ? "Yes" : "No") << std::endl;
//     std::cout << "Is d != f ? " << (d != f ? "Yes" : "No") << std::endl;

//     return (0);
// }