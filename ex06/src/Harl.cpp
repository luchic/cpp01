/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:02:04 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 19:42:39 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	_functions[0] = &Harl::debug;
	_functions[1] = &Harl::info;
	_functions[2] = &Harl::warning;
	_functions[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for "
				<< "my 7XL-double-cheese-triple-pickle-specialketchup "
				<< "burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon "
				<< "costs more money. You didn’t put "
				<< "enough bacon in my burger! If you did, "
				<< "I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra "
				<< "bacon for free. I’ve been coming for "
				<< "years whereas you started working here "
				<< "just last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak "
				<< "to the manager now." << std::endl;
	std::cout << std::endl;
}

HarlLevel Harl::_getLevel(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	else if (level == "INFO")
		return (INFO);
	else if (level == "WARNING")
		return (WARNING);
	else if (level == "ERROR")
		return (ERROR);
	return (UNKNOWN);
}

void Harl::complain(std::string level)
{
	switch (_getLevel(level))
	{
	case DEBUG:
		(this->*_functions[0])();
		[[fallthrough]];
	case INFO:
		(this->*_functions[1])();
		[[fallthrough]];
	case WARNING:
		(this->*_functions[2])();
		[[fallthrough]];
	case ERROR:
		(this->*_functions[3])();
		break;
	default:
		std::cout << "[ Probably complaining about "
			<< "insignificant problems ]" << std::endl;
		return ;
	}
}