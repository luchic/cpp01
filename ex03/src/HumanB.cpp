/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:20:55 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/24 17:22:07 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
	: _weapon(nullptr), _name(name)
{
}
void HumanB::setWeapon(Weapon* weapon)
{
	_weapon = weapon;
}

void HumanB::attack(void) const
{
	if (_weapon == nullptr)
	{
		std::cout << _name << " has no weapon to attack with!" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}