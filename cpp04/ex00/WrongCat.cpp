/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:44:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 16:27:51 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	this->_type = "WrongCat";

	std::cout << "WrongCat default constructor called" << std::endl;

	return ;
}

WrongCat::WrongCat(std::string type) {

	this->_type = type;

	std::cout << "WrongCat string constructor called" << std::endl;

	return ;
}

WrongCat::WrongCat(WrongCat const &src) {

	std::cout << "WrongCat copy constructor called" << std::endl;

	this->_type = "WrongCat";

	*this = src;

	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destructor called" << std::endl;

	return ;
}

std::string	WrongCat::getType(void) const {

	return this->_type;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {

	std::cout << "WrongCat copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_type = rhs.getType();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongCat const &rhs) {

	o << rhs.getType();

	return o;

}

void	WrongCat::makeSound(void) const {

	std::cout << *this << " : Meow Meow" << std::endl;

	return ;
}
