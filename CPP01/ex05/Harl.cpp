/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:40:40 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 09:20:44 by moetienn         ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void   Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You dont put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve some extra bacon for free. I ve been coming here for years and you just started working here last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable. I want to speak to the manager. I want a free meal." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;
        }
        else if (i == 3)
        {
            std::cout << "Invalid level" << std::endl;
            return ;
        }
    }
}
