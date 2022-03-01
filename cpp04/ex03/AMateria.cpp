/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:02:10 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 15:26:25 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type ("")
{
	//std::cout << "AMateria default constructor called" << std::endl;

	return ;
}

AMateria::AMateria(AMateria & src) : _type("")
{
	//std::cout << "AMateria copy constructor called" << std::endl;

	*this = src;

	return ;
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor called" << std::endl;

	return ;
}

AMateria	& AMateria::operator=(AMateria const & rhs) 
{
	//std::cout << "AMateria copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_type = rhs.getType();

	return (*this);	
}

AMateria::AMateria(std::string const & type)
{
	//std::cout << "AMateria string constructor called" << std::endl;

	this->_type = type;

	return ;
}

std::string const	& AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "* do nothing at " << target.getName() << " *" << std::endl; 

	return ;
}
