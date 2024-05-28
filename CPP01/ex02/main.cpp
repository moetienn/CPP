/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:26:13 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 11:30:36 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of the stringREF: " << &stringREF << std::endl;
    
    std::cout << "String: " << str << std::endl;
    std::cout << "StringPTR: " << *stringPTR << std::endl;
    std::cout << "StringREF: " << stringREF << std::endl; 
}
