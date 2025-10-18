/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:59:12 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 17:42:12 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon _weapon;
	std::string _name;
	
public:
	HumanB() = default;
	HumanB(const HumanB& other) = default;
	HumanB& operator=(const HumanB& other) = default;
	~HumanB() = default;

	HumanB(const std::string& name);
	
	void attack(void) const;
	void setWeapon(const Weapon& weapon);
};

#endif