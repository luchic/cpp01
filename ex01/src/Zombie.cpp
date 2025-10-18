/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:23:50 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 13:12:53 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : _name("Unnamed Zombie")
{	
	std::cout << _name << " is created." << std::endl;
}

Zombie::Zombie(const Zombie& other) : _name(other._name)
{
	std::cout << _name << " is created by copy." << std::endl;
}

Zombie& Zombie::operator = (const Zombie& other)
{
	std::cout << "Assigning Zombie " << other._name << " to " << _name << std::endl;
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

Zombie::Zombie(std::string name) : _name(name)
{	
	std::cout << name << " is created." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}
