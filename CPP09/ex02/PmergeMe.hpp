/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:58:48 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/30 12:10:39 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<unsigned int> _vector;
		std::list<unsigned int>		_list;
		size_t						_size;
		std::vector<std::pair<unsigned int, unsigned int> >	_pairs;

	public:
		PmergeMe(void);
		PmergeMe(int *Arr, int size);
		PmergeMe(PmergeMe const &src);
		~PmergeMe(void);
		PmergeMe		&operator=(PmergeMe const &rhs);
		
		// UTILITY FUNCTIONS

		void						printVector(std::vector<unsigned int> &container);

		// ALGORITHM FUNCTIONS
		
		std::vector<size_t>						buildSequence(size_t size);
		std::vector<unsigned int>				jacobSthalSequence(std::vector<unsigned int> &mainChain, std::vector<unsigned int> &tmpPendingChain);
		
		std::vector<unsigned int>				reOrderIndex(std::vector<std::vector<unsigned int> > &pairs, std::vector<unsigned int> &mainChain);
		
		std::vector<std::vector<unsigned int> >	createPairs(std::vector<unsigned int> &container);
		std::vector<unsigned int>				FordJohnson(std::vector<unsigned int> &container);
		void									Start(void);
}	;

#endif