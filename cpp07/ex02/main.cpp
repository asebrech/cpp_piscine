/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/15 15:15:35 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int	main(void)
{
	Array<std::string> test1(10);
	Array<std::string> test2;

	test1[5] = "this is the way";

	test2 = test1;

	std::cout << "Test copy assignment operator :" << std::endl;
	std::cout << test2[3] << std::endl;
	std::cout << test2[5] << std::endl << std::endl;

	test2[5] = "finish the fight";
	
	std::cout << "Test deep copy :" << std::endl;
	std::cout << test1[5] << std::endl;
	std::cout << test2[5] << std::endl << std::endl;

	Array<int> test3(117);

	std::cout << "Int array size : "  << test3.size() << std::endl << std::endl;

	try
	{
		std::cout << "Trying with index 117 :" << std::endl;
		std::cout << test3[117] << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	

	try
	{
		std::cout << "Trying with index -117 :" << std::endl;
		std::cout << test3[-117] << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
