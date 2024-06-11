/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:24:29 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/11 09:13:59 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const   Animal* meta = new Animal();
    const   Animal* j = new Dog();
    const   Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    const   WrongAnimal* meta2 = new WrongAnimal();
    const   WrongAnimal* j2 = new WrongCat();
    std::cout << j2->getType() << " " << std::endl;
    j2->makeSound();
    meta2->makeSound();
    delete j2;
    delete meta2;
    return (0);
}
