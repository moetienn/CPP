/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:55:00 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/03 10:02:27 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);
}