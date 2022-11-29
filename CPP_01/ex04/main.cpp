/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:19:54 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 11:02:23 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(char **av, std::string str)
{
	std::ofstream	outfile;
	std::string		s1;
	std::string		s2;
	int				position;

	s1 = av[2];
	s2 = av[3];

	//outfile opening and setting name (same as the infile with ".replace")
	
	outfile.open((std::string(av[1]) + ".replace"));
	if (outfile.fail())
		return ;
	position = 0;

	//filling outfile and replacing each occurence of av[2] by av[3]
	
	for (int i = 0; i < str.size(); i++)
	{
		position = str.find(s1, i);
		if (position != -1 && position == i)
		{
			outfile << s2;
			i += s1.size() - 1;
		}
		else
			outfile << str[i];
	}
}

int main(int ac, char **av)
{
	std::ifstream	infile;
	std::string		infile_copy;

	//infile opening
	infile.open(av[1], std::ios::in);
	if (infile.fail())
	{
		std::cout << av[1] << " : no such file or directory" << std::endl;
		return (0);
	}
	int	i = 0;
	char	c;
	
	while (!infile.eof() && infile >> std::noskipws >> c)
		infile_copy += c;
	infile.close();
	// std::cout << infile_copy << std::endl;
	
	//check argv
	
	if (ac != 4)
	{
		std::cout << "Wrong inputs, try again" << std::endl;
		return (1);
	}
	else
		ft_replace(av, infile_copy);
	return (0);
}