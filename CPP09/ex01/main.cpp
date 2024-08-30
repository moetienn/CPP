/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:46:58 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/28 09:11:13 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	class RPN rpn;
	
	if (ac != 2)
	{
		std::cout << "Usage: ./rpn \" String of digit\"" << std::endl;
		return (1);
	}
	rpn.calculate(av[1]);
}