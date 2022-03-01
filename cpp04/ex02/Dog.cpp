/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:48:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/23 17:24:33 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain) {

	std::cout << "Dog default constructor called" << std::endl;

	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const &src) : _brain(new Brain) {

	std::cout << "Dog copy constructor called" << std::endl;

	*this = src;

	return ;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;

	delete _brain;

	return ;
}

std::string	Dog::getType(void) const {

	return this->_type;
}

Brain	*Dog::getBrain(void) const {

	return this->_brain;
}

Dog	&Dog::operator=(Dog const &rhs) {

	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
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
