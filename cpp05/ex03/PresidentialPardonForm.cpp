/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:40:26 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 15:48:40 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _target("")
{
	//std::cout << "PresidentialPardonForm default constructor called" << std::endl;

	this->setName("PresidentialPardonForm");
	this->setForm(false);
	this->setGradeSign(25);
	this->setGradeExec(5);

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : _target("")
{
	//std::cout << "PresidentialPardonForm copy constructor called" << std::endl;

	this->setName("PresidentialPardonForm");
	this->setForm(false);
	this->setGradeSign(25);
	this->setGradeExec(5);

	*this = src;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << "PresidentialPardonForm destructor called" << std::endl;

	return ;
}

PresidentialPardonForm	& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) 
{
	//std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;

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

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : _target(target)
{
	//std::cout << "PresidentialPardonForm string constructor called" << std::endl;

	this->setName("PresidentialPardonForm");
	this->setForm(false);
	this->setGradeSign(25);
	this->setGradeExec(5);

	return ;
}

std::string const	&PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
