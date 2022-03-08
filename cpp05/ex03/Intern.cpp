/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:07:29 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 19:45:46 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	//std::cout << "Intern default constructor called" << std::endl;

	return ;
}

Intern::Intern(Intern & src)
{
	//std::cout << "Intern copy constructor called" << std::endl;

	*this = src;

	return ;
}

Intern::~Intern(void)
{
	//std::cout << "Intern destructor called" << std::endl;

	return ;
}

Intern	& Intern::operator=(Intern const & rhs) 
{
	//std::cout << "Intern copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		(void)rhs;
	}

	return (*this);	
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	typedef	Form	*(Intern::*InternMemFn)(std::string const &target) const;

	InternMemFn	formFn[] =
	{
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == Intern::forms[i])
			return((this->*formFn[i])(target));
	}
	std::cerr << "Form " << name << " doesn't exist" << std::endl;
	throw Intern::InvalidFormException();

	return (nullptr);
}

Form	*Intern::makeShrubbery(std::string const &target) const
{
	std::cout << "Intern creats ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomy(std::string const &target) const
{
	std::cout << "Intern creats RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidential(std::string const &target) const
{
	std::cout << "Intern creats PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

const char 	*Intern::InvalidFormException::what() const throw()
{
	return ("Error: invalid form");
}

std::string	Intern::forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
