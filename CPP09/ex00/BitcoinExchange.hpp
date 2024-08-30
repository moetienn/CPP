/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:54:41 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/28 09:18:59 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <exception>
# include <limits>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_map;
		// std::string						_input;
		int 							_year, _month, _day;

		void	_readDataBase();
		std::string	_getKey(std::string date);
		std::string	_getClosestDate(std::string date);
		void		_isValidValue(double value);
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange(void);
		BitcoinExchange		&operator=(BitcoinExchange const &rhs);
		
		void	readInput(const std::string &filename);
		void	printMap(void);

		class FileDoesNotExistException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: could not open the input file");
				}
		}	;

		class NoDataForThisDate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: no data for this date");
				}
		}	;

		class NotPositiveNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: not a positive number");
				}
		}	;

		class OverFlowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large number");
				}
		}	;

		class BadInputException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: bad input => ");
				}
		}	;
}	;

#endif