/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:29:25 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/17 12:21:18 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

	return ;
}

Animal::Animal(std::string type) : _type(type) {

	std::cout << "Animal string constructor called" << std::endl;

	return ;
}

Animal::Animal(Animal const &src) {

	std::cout << "Animal copy constructor called" << std::endl;

	*this = src;

	return ;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

std::string	Animal::getType(void) const {

	return this->_type;
}

Animal	&Animal::operator=(Animal const &rhs) {

	std::cout << "Animal copy assignment operator called" << std::endl;

	this->_type = rhs.getType();

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Animal const &rhs) {

	o << rhs.getType();

	return o;

}

void	Animal::makeSound(void) const {

	std::cout << *this << " : sound of an unrecognizable animal" << std::endl;

	return ;
}
