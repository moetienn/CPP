/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:08:46 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/30 09:06:03 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cerr << "Error Nothing to sort" << std::endl;
		return (1);
	}

	int		Arr[ac - 1];
	for (int i = 1; i < ac; i++)
	{
		Arr[i - 1] = std::atoi(av[i]);
	}
	
	PmergeMe	mergeMe(Arr, ac - 1);
	
	mergeMe.Start();
}