/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:49:57 by moetienn          #+#    #+#             */
/*   Updated: 2024/08/26 11:30:51 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
	private:
		std::stack<float> _stack;
	public:
		RPN(void);
		RPN(RPN const &src);
		~RPN(void);

		RPN &operator=(RPN const &rhs);

		void    calculate(std::string str);
};


#endif