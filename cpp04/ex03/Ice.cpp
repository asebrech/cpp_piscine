/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:16:34 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 20:51:52 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default constructor called" << std::endl;

	this->_type = "Ice";

	return ;
}

Ice::Ice(Ice & src)
{
	std::cout << "Ice copy constructor called" << std::endl;

	this->_type = "Ice";

	*this = src;

	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;

	return ;
}

Ice	& Ice::operator=(Ice const & rhs) 
{
	std::cout << "Ice copy assignment operator called" << std::endl;

	this->_type = rhs.getType();

	return (*this);	
}

Ice::Ice(std::string const & type)
{
	std::cout << "Ice string constructor called" << std::endl;

	this->_type = type;

	return ;
}

Ice	*Ice::clone() const
{
	return (new Ice(this->_type));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 

	return ;
}
