/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:54:48 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/28 10:07:59 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange		&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		this->_map = rhs._map;
	}
	return (*this);
}

void	BitcoinExchange::_readDataBase()
{
	std::ifstream file("data.csv");
	std::string line;
	std::string key;
	double value;

	if (!file.is_open())
		throw FileDoesNotExistException();
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::getline(ss, key, ',');
		ss >> value;
		this->_map[key] = value;
	}
	file.close();
}

std::string BitcoinExchange::_getClosestDate(std::string date)
{
    std::map<std::string, double>::iterator it = this->_map.lower_bound(date);
    if (it == this->_map.begin())
	{
        throw NoDataForThisDate();
    }
    if (it == this->_map.end() || it->first != date)
	{
        --it;
    }
    return (it->first);
}

void	BitcoinExchange::_isValidValue(double value)
{
	if (value <= 0)
		throw NotPositiveNumber();
	if (value > std::numeric_limits<int>::max())
		throw OverFlowException();
}

std::string	BitcoinExchange::_getKey(std::string key)
{
	char	c;
	key.erase(key.find_last_not_of(" \n\r\t") + 1);
	
	if (key.length() != 10)
		throw BadInputException();
	std::istringstream ss(key);
	ss >> this->_year >> c >> this->_month >> c >> this->_day;
	if(key.find('-') == key.rfind('-') || ss.fail() || ss.get() != EOF || this->_year < 2000 || this->_year > 2024)
		throw BadInputException();
	if (this->_month < 1 || this->_month > 12)
		throw BadInputException();
	
	int	daysInMonth = 31;
	
	if (_month == 4 || _month == 6 || _month == 9 || _month == 11)
		daysInMonth = 30;
	else if (_month == 2)
	{
		if (_year % 4 == 0 && (_year % 100 != 0 || _year % 400 == 0))
			daysInMonth = 29;
		else
			daysInMonth = 28;
	}
	if (this->_day < 1 || this->_day > daysInMonth)
		throw BadInputException();
	return (key);
}

void	BitcoinExchange::readInput(const std::string &filename)
{
    std::ifstream file(filename.c_str());
	std::string line;

	_readDataBase();
	if (!file.is_open())
		throw FileDoesNotExistException();
	while (std::getline(file, line))
	{
		size_t pos = line.find("|");
		std::string date = line.substr(0, pos);
		double value = std::strtod(line.substr(pos + 1).c_str(), NULL);
		std::map<std::string, double>::iterator it = this->_map.find(date);
		try
		{
			std::string key = _getKey(date);
			_isValidValue(value);
			
			if (it != this->_map.end())
			{
				double result = value * it->second;
				std::cout << key << " =>" << line.substr(pos + 1) << " => " << result << std::endl;
			}
			else
			{
				key = _getClosestDate(key);
				double result = value * this->_map[key];
				std::cout << key << " =>" << line.substr(pos + 1) << " => " << result << std::endl;
			}
		}
		catch (const BadInputException &e)
		{
			std::cerr << e.what() << date << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
    file.close();
}

void	BitcoinExchange::printMap(void)
{
	std::map<std::string, double>::iterator it = this->_map.begin();
	while (it != this->_map.end())
	{
		std::cout << it->first << " " << it->second << std::endl;
		it++;
	}
}

BitcoinExchange::~BitcoinExchange(void)
{
}