/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:23:13 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 11:22:28 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    std::cout << "Creating a horde of 5 zombies" << std::endl;
    Zombie  *horde = zombieHorde(3, "Jean-Michel");
    for (int i = 0; i < 3; i++)
        horde[i].announce();
    delete[] horde;
    std::cout << "Horde destroyed" << std::endl;

    std::cout << "Creating a horde of 10 zombies" << std::endl;
    Zombie  *horde2 = zombieHorde(10, "Bernard");
    for (int i = 0; i < 10; i++)
        horde2[i].announce();
    delete[] horde2;
    std::cout << "Horde destroyed" << std::endl;
    return (0);
}
