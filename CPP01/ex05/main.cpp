/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:41:40 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 09:19:03 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    complain(std::string level);

int main(int ac, char **av)
{
    Harl    harl;   
    
    if (ac != 2)
    {
        std::cout << "Usage : ./harl [debug/info/warning/error]" << std::endl;
        return (1);
    }
    std::string level = av[1];
    harl.complain(level);
    return (0);
}
