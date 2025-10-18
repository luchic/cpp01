/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:20:55 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 17:40:27 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
	: _weapon(""), _name(name)
{
}
void HumanB::setWeapon(const Weapon& weapon)
{
	_weapon = weapon;
}

void HumanB::attack(void) const
{
	if (_weapon.getType().empty())
	{
		std::cout << _name << " has no weapon to attack with!" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}