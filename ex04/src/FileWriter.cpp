/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileWriter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:23:08 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:42:41 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileWriter.hpp"
#include <fstream>

FileWriter::FileWriter(const std::string& filename)
	: _filename(filename)
{
}

FileWriter::~FileWriter()
{
}

bool FileWriter::write(const std::string& content)
{
	std::ofstream outfile(_filename.c_str());
	if (!outfile.is_open())
		return false;

	outfile << content;
	outfile.close();
	return true;
}
