/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:49:59 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/26 11:31:32 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	
}
RPN::RPN(RPN const &src)
{
	*this = src;
}

void	RPN::calculate(std::string str)
{
	std::stringstream ss(str);
	std::string token;
	
	while (ss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (_stack.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
		}
		if (token.size() != 1 || (!isdigit(token[0]) && token != "+" && token != "-" && token != "*" && token != "/"))
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		if (token == "+")
		{
			float a = _stack.top();
			_stack.pop();
			float b = _stack.top();
			_stack.pop();
			_stack.push(a + b);
		}
		else if (token == "-")
		{
			float a = _stack.top();
			_stack.pop();
			float b = _stack.top();
			_stack.pop();
			_stack.push(b - a);
		}
		else if (token == "*")
		{
			float a = _stack.top();
			_stack.pop();
			float b = _stack.top();
			_stack.pop();
			_stack.push(a * b);
		}
		else if (token == "/")
		{
			float a = _stack.top();
			_stack.pop();
			float b = _stack.top();
			_stack.pop();
			_stack.push(b / a);
		}
		else
			_stack.push(atof(token.c_str()));
	}
	if (_stack.size() != 1)
		std::cout << "Error" << std::endl;
	else
	{
		std::cout << _stack.top() << std::endl;
	}
}

RPN &RPN::operator=(RPN const &rhs)
{
	(void)rhs;
	return (*this);
}

RPN::~RPN(void)
{
	
}
