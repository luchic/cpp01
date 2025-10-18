/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:22:15 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 17:22:25 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
	: _type(type)
{
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}
