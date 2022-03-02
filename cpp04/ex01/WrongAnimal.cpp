/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:42:24 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:30:36 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {

	std::cout << "WrongAnimal default constructor called" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {

	std::cout << "WrongAnimal string constructor called" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type("WrongAnimal") {

	std::cout << "WrongAnimal copy constructor called" << std::endl;

	*this = src;

	return ;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destructor called" << std::endl;

	return ;
}

std::string const	& WrongAnimal::getType(void) const {

	return this->_type;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {

	std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_type = rhs.getType();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs) {

	o << rhs.getType();

	return o;

}

void	WrongAnimal::makeSound(void) const {

	std::cout << *this << " : sound of an unrecognizable animal" << std::endl;

	return ;
}
