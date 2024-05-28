/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:34:13 by moetienn          #+#    #+#             */
/*   Updated: 2024/05/28 13:48:09 by moetienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac < 4 || ac > 4)
    {
        std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error : file doesnt exist" << std::endl;
        return (1);
    }
    file.seekg(0, std::ios::end);
    if (file.tellg() == 0)
    {
        std::cout << "Error : file is empty" << std::endl;
        return (1);
    }
    file.seekg(0, std::ios::beg);
    std::ofstream new_file("new_file");
    if (!new_file.is_open())
    {
        std::cout << "Error : file doesnt exist" << std::endl;
        return (1);
    }
    std::string line;
    std::string s1 = av[2];
    std::string s2 = av[3];
    while (std::getline(file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            std::string start = line.substr(0, pos);
            std::string end = line.substr(pos + s1.length());
            line = start + s2 + end;
            pos += s2.length();
        }
        new_file << line << std::endl;
    }
    return (0);
}
