/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:53:31 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 19:01:53 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __HARL_H__
#define __HARL_H__

#include <string>

class Harl
{
private:
	std::string _levels[4];
	void (Harl::*_functions[4])(void);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	
public:
	Harl();
	~Harl();

	void complain(std::string level);
};



#endif