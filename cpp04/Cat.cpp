/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:48:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/17 12:24:45 by asebrech         ###   ########.fr       */
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

	*this = src;

	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;

	return ;
}

std::string	Cat::getType(void) const {

	return this->_type;
}

Cat	&Cat::operator=(Cat const &rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	this->_type = rhs.getType();

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
