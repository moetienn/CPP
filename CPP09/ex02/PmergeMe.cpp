/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:07:05 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/30 14:32:34 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::printVector(std::vector<unsigned int> &container)
{
	for (std::vector<unsigned int>::iterator it = container.begin(); it != container.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

PmergeMe::PmergeMe(void)
{
	this->_size = 0;
}

PmergeMe::PmergeMe(int *Arr, int size)
{
	this->_size = size;
	std::cout << "Before: ";
	for (int i = 0; i < size; i++)
	{
		this->_vector.push_back(Arr[i]);
		this->_list.push_back(Arr[i]);
		std::cout << Arr[i] << " ";
	}
	std::cout << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe		&PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_list = rhs._list;
		this->_size = rhs._size;
	}
	return (*this);
}

std::vector<std::vector<unsigned int> >	PmergeMe::createPairs(std::vector<unsigned int> &container)
{
	std::vector<std::vector<unsigned int> >		pairs(container.size() / 2);
	size_t										j = 0;
	
	for (size_t i = 0; i < container.size(); i += 2)
	{
		if (container[i] < container[i + 1])
		{
			pairs[j].push_back(container[i]);
			pairs[j].push_back(container[i + 1]);
		}
		else
		{
			pairs[j].push_back(container[i + 1]);
			pairs[j].push_back(container[i]);
		}
		j++;
	}
	return (pairs);
}

std::vector<unsigned int>	PmergeMe::reOrderIndex(std::vector<std::vector<unsigned int> > &pairs, std::vector<unsigned int> &mainChain)
{
	std::vector<unsigned int>		orderedChain;

	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = 0; j < mainChain.size(); j++)
		{
			if (pairs[i][1] == mainChain[j])
			{
				orderedChain.push_back(pairs[i][0]);
				break;
			}
		}
	}
	return (orderedChain);
}

std::size_t		JacobSthalNbr(size_t n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
	{
		return (JacobSthalNbr(n - 1) + 2 * JacobSthalNbr(n - 2));
	}
}

std::vector<size_t>	PmergeMe::buildSequence(size_t size)
{
	std::vector<size_t>		sequence;
	
	for (size_t i = 3; JacobSthalNbr(i) < size - 1; i++)
	{
		sequence.push_back(JacobSthalNbr(i));
	}
	return (sequence);
}

// std::vector<unsigned int> PmergeMe::jacobSthalSequence(std::vector<unsigned int> &mainChain, std::vector<unsigned int> &tmpPendingChain)
// {
//     std::cout << "In JacobStahl" << std::endl;
    
//     std::vector<size_t> sequence = buildSequence(tmpPendingChain.size());
//     std::vector<size_t> indexSequence(1, 0);
//     size_t j = 0;

//     while (indexSequence.size() != tmpPendingChain.size())
//     {
//         if (std::find(indexSequence.begin(), indexSequence.end(), j) != indexSequence.end())
//         {
//             if (!sequence.empty())
//             {
//                 j = sequence[0];
//                 sequence.erase(sequence.begin());
//             }
//             else
//             {
//                 j = tmpPendingChain.size() - 1;
//             }
//         }
//         indexSequence.push_back(j);
//         mainChain.insert(std::upper_bound(mainChain.begin(), mainChain.end(), tmpPendingChain[j]), tmpPendingChain[j]);
//         j--;
//     }
//     return mainChain;
// }


std::vector<unsigned int>	PmergeMe::jacobSthalSequence(std::vector<unsigned int> &mainChain, std::vector<unsigned int> &tmpPendingChain)
{
	std::vector<size_t>		sequence = buildSequence(tmpPendingChain.size()), indexSequence(1, 0);
	std::cout << "Sequence: ";
	for (size_t i = 0; i < sequence.size(); i++)
	{
		std::cout << sequence[i] << " ";
	}
	std::cout << std::endl;
	size_t					j = 0;

	while (indexSequence.size() != tmpPendingChain.size())
	{
		if (std::find(indexSequence.begin(), indexSequence.end(), j) != indexSequence.end())
		{
			if (!sequence.empty())
			{
				j = sequence[0] - 1;
				sequence.erase(sequence.begin());
			}
			else
			{
				j = tmpPendingChain.size() - 1;
			}
			std::cout << "J: " << j << std::endl;
		}
		indexSequence.push_back(j);
		std::cout << "Index Sequence: ";
		for (size_t i = 0; i < indexSequence.size(); i++)
		{
			std::cout << indexSequence[i] << " ";
		}
		mainChain.insert(std::upper_bound(mainChain.begin(), mainChain.end(), tmpPendingChain[j]), tmpPendingChain[j]);
		std::cout << "Inserted into main Chain: " << tmpPendingChain[j] << std::endl;
		std::cout << "New Main Chain: ";
		printVector(mainChain);
		j--;
	}
	return (mainChain);
}


std::vector<unsigned int> PmergeMe::FordJohnson(std::vector<unsigned int> &container)
{
	// -------- 0. BASE CASE --------

	if (container.size() == 1)
	{
		return container;
	}

	// -------- 0.1 STRAGGLER --------

	unsigned int		straggler = 0;
	
	if (container.size() % 2 != 0)
	{
		straggler = container[container.size() - 1];
		container.pop_back();
		this->_size--;
	}



	//  -------- 1. CREATE PAIRS --------

	std::vector<std::vector<unsigned int> >		pairs = createPairs(container);

	// -------- 2 SORT PAIRS RECUR --------
	
	std::vector<unsigned int>		mainChain;

	for (size_t i = 0; i < pairs.size(); i++)
	{
		mainChain.push_back(pairs[i][1]);
	}
	
	mainChain = FordJohnson(mainChain);
	
	std::vector<unsigned int>		pendingChain;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		pendingChain.push_back(pairs[i][0]);
	}
	
	// -------- 3. MERGE --------

	// -------- 3.1 JacobStal --------
		
	std::vector<unsigned int>		TmpPendingChain = reOrderIndex(pairs, mainChain);

	std::cout << "tmpPendingChain: ";
	printVector(TmpPendingChain);
	if (straggler != 0)
	{
		TmpPendingChain.push_back(straggler);
	}

	std::cout << "inserting before JS Sequence: " << TmpPendingChain[0] << std::endl;
	mainChain.insert(std::upper_bound(mainChain.begin(), mainChain.end(), TmpPendingChain[0]), TmpPendingChain[0]);
	mainChain = jacobSthalSequence(mainChain, TmpPendingChain);
	
	return (mainChain);
}


bool	is_sorted(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end)
{
	for (std::vector<unsigned int>::iterator it = begin; it != end - 1; it++)
	{
		if (*it > *(it + 1))
		{
			return false;
		}
	}
	return true;
}


void	PmergeMe::Start(void)
{
	// clock_t		start;
	// clock_t		end;
	
	// start = clock();
	std::vector<unsigned int> SortedVector = FordJohnson(this->_vector);

	is_sorted(SortedVector.begin(), SortedVector.end()) ? std::cout << "Sorted" << std::endl : std::cout << "Not Sorted" << std::endl;
	std::cout << "After: ";
	printVector(SortedVector);
	// end = clock();
	// std::cout << "Time: " << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000 << std::endl;
}


PmergeMe::~PmergeMe(void)
{
}
