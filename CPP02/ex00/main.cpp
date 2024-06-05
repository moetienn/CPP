/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:20:28 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 11:32:54 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

// int main() {
//     // Create a Fixed object
//     Fixed a;
//     a.setRawBits(10);
//     std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl; // Should print 10

//     // Test the copy constructor
//     Fixed b(a);
//     std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl; // Should print 10

//     // Test the assignment operator
//     Fixed c;
//     c = a;
//     std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl; // Should print 10

//     // Test setRawBits
//     c.setRawBits(20);
//     std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl; // Should print 20

//     return 0;
// }