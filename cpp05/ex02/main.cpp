/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:39:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 13:33:33 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "Testing Form with 100 and 160" << std::endl;

		RobotomyRequestForm test("test");
		
		Bureaucrat("test", 1).signForm(test);

		Bureaucrat("test", 1).execute(test);
		//test.execute(Bureaucrat("test", 117));

		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << std::endl;
	}

	return (0);
}
