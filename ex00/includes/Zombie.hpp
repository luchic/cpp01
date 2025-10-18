/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:24:01 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 12:39:49 by nluchini         ###   ########.fr       */
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
	Zombie(std::string name) : _name(name) {}
	~Zombie();

	void announce(void);
};


#endif