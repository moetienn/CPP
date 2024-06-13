/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:48:52 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 10:06:52 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
    try
    {
        // Bureaucrat b("Bureaucrat", 120);
        // bureaucrat b("Bureaucrat", 148);
        Bureaucrat b("Bernard", 140);
        ShrubberyCreationForm home("Home");
        std::cout << b << std::endl;
        std::cout << home << std::endl;
        home.beSigned(b);
        b.signForm(home.getSigned(), home.getName());
        b.executeForm(home);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	return (0);
}