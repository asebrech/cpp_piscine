/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:39:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/07 18:24:34 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "Testing with grade 160" << std::endl;
		Bureaucrat test("test", 160);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "Testing with grade 0" << std::endl;
		Bureaucrat toto("toto",0);
		std::cout << toto << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat toto("toto",117);
		std::cout << toto << std::endl;
		std::cout << "Demote toto" << std::endl;
		toto.demote();
		std::cout << toto << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat toto("toto",150);
		std::cout << toto << std::endl;
		std::cout << "demote toto" << std::endl;
		toto.demote();
		std::cout << toto << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
