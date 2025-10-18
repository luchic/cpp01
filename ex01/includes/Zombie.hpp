/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:24:01 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 13:12:04 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(const Zombie&);
	Zombie& operator = (const Zombie&);
	~Zombie();

	Zombie(std::string name);
	void announce(void);
};


#endif