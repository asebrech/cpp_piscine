/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:48:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:36:15 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	this->_type = "Dog";

	std::cout << "Dog default constructor called" << std::endl;

	return ;
}

Dog::Dog(std::string type) {

	this->_type = type;

	std::cout << "Dog string constructor called" << std::endl;

	return ;
}

Dog::Dog(Dog const &src) {

	std::cout << "Dog copy constructor called" << std::endl;

	this->_type = "Dog";

	*this = src;

	return ;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;

	return ;
}

Dog	&Dog::operator=(Dog const &rhs) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_type = rhs.getType();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Dog const &rhs) {

	o << rhs.getType();

	return o;

}

void	Dog::makeSound(void) const {

	std::cout << *this << " : Woof Woof" << std::endl;

	return ;
}
