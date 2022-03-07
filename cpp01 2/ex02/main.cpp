/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:23:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 15:41:16 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <string>

int	main(void) {

	std::string str ("HI THIS IS BRAIN");

	std::string *stringPTR = &str;

	std::string &stringREF = str;

	std::cout << "memory address of the string variable: " << &str << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "value of the string variable: " << str << std::endl;
	std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	
	return 0;
}
