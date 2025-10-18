/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:19:23 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 13:22:23 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "Address of str:       " << &str << std::endl;
	std::cout << "Address held by PTR:  " << stringPTR << std::endl;
	std::cout << "Address held by REF:  " << &stringREF << std::endl;

	std::cout << "Value of str:         " << str << std::endl;
	std::cout << "Value pointed by PTR: " << *stringPTR <<  std::endl;
	std::cout << "Value pointed by REF: " << stringREF << std::endl;
	
	return 0;
}