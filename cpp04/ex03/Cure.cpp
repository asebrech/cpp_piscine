/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:01:32 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 15:30:09 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	//std::cout << "Cure default constructor called" << std::endl;

	this->_type = "cure";

	return ;
}

Cure::Cure(Cure & src)
{
	//std::cout << "Cure copy constructor called" << std::endl;

	this->_type = "cure";

	*this = src;

	return ;
}

Cure::~Cure(void)
{
	//std::cout << "Cure destructor called" << std::endl;

	return ;
}

Cure	& Cure::operator=(Cure const & rhs) 
{
	//std::cout << "Cure copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_type = rhs.getType();
	}
	return (*this);	
}

Cure::Cure(std::string const & type)
{
	//std::cout << "Cure string constructor called" << std::endl;

	this->_type = type;

	return ;
}

Cure	*Cure::clone() const
{
	return (new Cure(this->_type));
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 

	return ;
}
