/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:26:20 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 16:21:24 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _target("")
{
	//std::cout << "RobotomyRequestForm default constructor called" << std::endl;

	this->setName("RobotomyRequestForm");
	this->setForm(false);
	this->setGradeSign(72);
	this->setGradeExec(45);

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : _target("")
{
	//std::cout << "RobotomyRequestForm copy constructor called" << std::endl;

	this->setName("RobotomyRequestForm");
	this->setForm(false);
	this->setGradeSign(72);
	this->setGradeExec(45);

	*this = src;

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << "RobotomyRequestForm destructor called" << std::endl;

	return ;
}

RobotomyRequestForm	& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) 
{
	//std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;

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

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : _target(target)
{
	//std::cout << "RobotomyRequestForm string constructor called" << std::endl;

	this->setName("RobotomyRequestForm");
	this->setForm(false);
	this->setGradeSign(72);
	this->setGradeExec(45);

	return ;
}

std::string const	&RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::beExecuted(void) const
{
	srand (time(NULL));

	std::cout << "Rizzzz rizzz rizzzzzzzzz" << std::endl;

	if (rand() % 2)
	{
		std::cout << this->_target << " has been successfully robotomized" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize " << this->_target << std::endl;
	}	
}
