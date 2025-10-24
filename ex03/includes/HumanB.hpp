/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:59:12 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/24 17:27:40 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* _weapon;
	std::string _name;
	
public:
	~HumanB() = default;
	HumanB(const std::string& name);
	
	void attack(void) const;
	void setWeapon(const Weapon& weapon);
};

#endif