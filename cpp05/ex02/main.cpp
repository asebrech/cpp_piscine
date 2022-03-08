/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:39:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 16:18:37 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	toto("toto", 73);
		std::cout << toto << std::endl;	
		Bureaucrat	tata("tata", 3);
		std::cout << tata << std::endl;	

		std::cout << std::endl;	

		ShrubberyCreationForm	home("home");
		std::cout << home << std::endl;	
		RobotomyRequestForm	robo("toto");
		std::cout << robo << std::endl;	
		PresidentialPardonForm	president("toto");
		std::cout << president << std::endl;	

		std::cout << std::endl;	

		toto.execute(home);
		toto.signForm(home);
		toto.execute(home);
		std::cout << home << std::endl;	

		std::cout << std::endl;	

		toto.signForm(robo);
		toto.promote();
		std::cout << toto << std::endl;	
		toto.signForm(robo);
		toto.execute(robo);
		tata.execute(robo);
		std::cout << robo << std::endl;	

		std::cout << std::endl;	

		tata.signForm(president);
		tata.execute(president);
		std::cout << president << std::endl;	

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
