/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:46:34 by hyko              #+#    #+#             */
/*   Updated: 2022/11/14 00:23:47 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //file stream

int replace_string(std::string str, char **argv)
{
	std::ofstream	outFile;
	std::string 	filename = argv[1];
	std::string 	oldWord = argv[2];
	std::string 	newWord = argv[3];
	int				pos;

	outFile.open(filename + ".replace");
	if (outFile.fail())
		return (1);
	for (int i = 0; str[i]; i++)
	{
		pos = str.find(oldWord, i);
		if (pos == i)
		{
			outFile << newWord;
			i += oldWord.length() - 1;
		}
		else
			outFile << str[i];
	}
	outFile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace <filename> old_word new_word" << std::endl;
		return (1);
	}

	std::ifstream	inFile;
	std::string		filename = argv[1];
	inFile.open(filename);
	if (!inFile.is_open())
	{
		std::cout << "Error: <" << filename << "> " << "no such file or directory" << std::endl;
		return (1);	
	}
	
	std::string 	str;
	char			c;	
	while (inFile >> std::noskipws >> c)
		str += c;
	inFile.close();
	return(replace_string(str, argv));
}
