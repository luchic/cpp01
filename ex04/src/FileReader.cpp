/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReader.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:23:02 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:42:44 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReader.hpp"
#include <fstream>

FileReader::FileReader(const std::string& filename)
	: _filename(filename), _content("")
{
}
FileReader::~FileReader()
{
}

bool FileReader::read()
{
	std::ifstream infile(_filename.c_str());
	if (!infile.is_open())
		return false;

	std::string line;
	while (std::getline(infile, line))
	{
		_content += line + "\n";
	}
	infile.close();
	return true;
}

std::string const& FileReader::getContent() const
{
	return _content;
}
