/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:38:21 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 12:20:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("")
{
	//std::cout << "ShrubberyCreationForm default constructor called" << std::endl;

	this->setName("ShrubberyCreationForm");
	this->setForm(false);
	this->setGradeSign(145);
	this->setGradeExec(137);

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : _target("")
{
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;

	this->setName("ShrubberyCreationForm");
	this->setForm(false);
	this->setGradeSign(145);
	this->setGradeExec(137);

	*this = src;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;

	return ;
}

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) 
{
	//std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setForm(rhs.getForm());
		this->setGradeSign(rhs.getGradeSign());
		this->setGradeExec(rhs.getGradeExec());
		this->_target = rhs.getTarget(); 
	}

	return (*this);	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : _target(target)
{
	//std::cout << "ShrubberyCreationForm string constructor called" << std::endl;

	this->setName("ShrubberyCreationForm");
	this->setForm(false);
	this->setGradeSign(145);
	this->setGradeExec(137);

	return ;
}

std::string const	&ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::beExecuted(void) const
{
	std::cout << "this is the way" << std::endl;
}
