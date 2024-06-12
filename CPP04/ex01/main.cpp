/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:24:29 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 08:22:05 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    const Animal* k[6] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
    for (int i = 0; i < 6; i++)
    {
        delete k[i];
    }
    return (0);
}