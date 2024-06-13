/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:48:52 by moetienn          #+#    #+#             */
/*   Updated: 2024/06/13 11:00:07 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
        Bureaucrat  b1("b1", 29);
        std::cout << b1 << std::endl;
        Form    f1;
        try
        {
            f1 = Form("f1", 190, 120);
            std::cout << f1 << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            f1.beSigned(b1);
            b1.signForm(f1.getSigned(), f1.getName());
            std::cout << f1 << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << "-----------------------------------------" << std::endl;

    try
    {
        Bureaucrat  b2("b2", 140);
        std::cout << b2 << std::endl;
        Form    f2("f2", 139, 120);
        std::cout << f2 << std::endl;
        f2.beSigned(b2);
        b2.signForm(f2.getSigned(), f2.getName());
        b2.incrementGrade();
        f2.beSigned(b2);
        b2.signForm(f2.getSigned(), f2.getName());
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return (0);
}