/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:39:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 10:33:30 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << "Testing Form with 100 and 160" << std::endl;

		Form	test("test", 100, 160);

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 117);
		std::cout << toto << std::endl;

		std::cout << std::endl;

		Bureaucrat tata("tata", 50);
		std::cout << tata << std::endl;

		std::cout << std::endl;

		Form form("form",100, 120);
		std::cout << form << std::endl;

		std::cout << std::endl;

		toto.signForm(form);
		std::cout << form << std::endl;

		std::cout << std::endl;

		tata.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
