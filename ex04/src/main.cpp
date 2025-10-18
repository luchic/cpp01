/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:42:34 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReader.hpp"
#include "FileWriter.hpp"
#include "StringReplacer.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	FileReader fileReader(filename);
	if (!fileReader.read())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return (1);
	}

	std::string content = fileReader.getContent();
	std::string modifiedContent = StringReplacer::replaceAll(content, s1, s2);

	FileWriter fileWriter(filename + ".replace");
	if (!fileWriter.write(modifiedContent))
	{
		std::cerr << "Error: Could not write to file " << filename
			+ ".replace" << std::endl;
		return (1);
	}
	return (0);
}
