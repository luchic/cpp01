/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:18:11 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:21:30 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRINGREPLACER_H__
#define __STRINGREPLACER_H__

#include <string>

class StringReplacer
{
public:
	static std::string replaceAll(const std::string &str,
		const std::string &from, const std::string &to);
};

#endif