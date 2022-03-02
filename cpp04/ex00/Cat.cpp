/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:48:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:35:28 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	this->_type = "Cat";

	std::cout << "Cat default constructor called" << std::endl;

	return ;
}

Cat::Cat(std::string type) {

	this->_type = type;

	std::cout << "Cat string constructor called" << std::endl;

	return ;
}

Cat::Cat(Cat const &src) {

	std::cout << "Cat copy constructor called" << std::endl;

	this->_type = "Cat";

	*this = src;

	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;

	return ;
}

Cat	&Cat::operator=(Cat const &rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_type = rhs.getType();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Cat const &rhs) {

	o << rhs.getType();

	return o;

}

void	Cat::makeSound(void) const {

	std::cout << *this << " : Meow Meow" << std::endl;

	return ;
}
