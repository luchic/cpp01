/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:54:34 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 17:21:23 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __WEAPON_H__
#define __WEAPON_H__

#include <string>
	
class Weapon
{
private:
	std::string _type;	

public:
	Weapon() = default;
	Weapon(const Weapon& other) = default;
	Weapon& operator=(const Weapon& other) = default;
	~Weapon() = default;

	Weapon(const std::string& type);

	const std::string& getType() const;
	void setType(const std::string& type);
};

#endif