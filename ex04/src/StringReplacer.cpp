/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:20:44 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:42:30 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"

std::string StringReplacer::replaceAll(const std::string &content,
	const std::string &s1, const std::string &s2)
{
	if (s1.empty())
		return (content);

	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;

	while ((pos = content.find(s1, lastPos)) != std::string::npos)
	{
		result.append(content, lastPos, pos - lastPos);
		result.append(s2);
		lastPos = pos + s1.length();
	}
	result.append(content, lastPos, std::string::npos);

	return (result);
}
