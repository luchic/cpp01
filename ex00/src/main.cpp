/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 12:43:41 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie* tmp;
	{
		Zombie* zombie1 = newZombie("Heap Zombie1");
		zombie1->announce();
		tmp = zombie1;
	}
	{
		Zombie zombie1 = Zombie("Stack Zombie1");
		zombie1.announce();
	}
	randomChump("Zombie2");
	delete tmp;
	return 0;
}
