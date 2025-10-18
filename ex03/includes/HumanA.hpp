/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:57:18 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 17:25:28 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon _weapon;
	std::string _name;
	
public:
	HumanA() = default;
	HumanA(const HumanA& other) = default;
	HumanA& operator=(const HumanA& other) = default;
	~HumanA() = default;

	HumanA(const std::string& name, const Weapon& weapon);

	void setWeapon(const Weapon& weapon);
	void attack(void) const;
};

#endif