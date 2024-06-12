/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:48:52 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/12 10:25:58 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{	
	try
	{
        Bureaucrat b1("b1", 151);
        std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    try
    {
        Bureaucrat b2("b2", 0);
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat b3("b3", 140);
        std::cout << b3 << std::endl;
        b3.incrementGrade();
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b4("b4", 10);
        std::cout << b4 << std::endl;
        b4.decrementGrade();
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b5("b5", 1);
        std::cout << b5 << std::endl;
        b5.decrementGrade();
        std::cout << b5 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b6("b6", 150);
        std::cout << b6 << std::endl;
        b6.incrementGrade();
        std::cout << b6 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return (0);
}