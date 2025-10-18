/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:53:31 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 19:40:14 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __HARL_H__
#define __HARL_H__

#include <string>

enum HarlLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

class Harl
{
private:
	void (Harl::*_functions[4])(void);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	
	HarlLevel _getLevel(std::string level);
	
public:
	Harl();
	~Harl();

	void complain(std::string level);
};



#endif