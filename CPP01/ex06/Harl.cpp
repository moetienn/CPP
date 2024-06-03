/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:55:23 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 10:15:29 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{  
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "Dont eat too much bacon or you'll be fat" << std::endl;
    std::cout << "\n";
}

void    Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "This is a very nice place to have some extra bacon for free" << std::endl;
    std::cout << "\n";
}

void    Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
    std::cout << "I ve been coming for years whereas you started working here since last month" << std::endl;
    std::cout << "\n";
}

void    Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int count = 1;
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
        count++;
    }
    switch (count)
    {
        case 1:
            debug();
        case 2:
            info();
        case 3:
            warning();
        case 4:
            error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}