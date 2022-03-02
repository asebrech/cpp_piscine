/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:48:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:29:38 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _brain(new Brain) {

	std::cout << "Cat default constructor called" << std::endl;

	this->_type = "Cat";

	return ;
}

Cat::Cat(Cat const &src) : _brain(new Brain) {

	std::cout << "Cat copy constructor called" << std::endl;

	*this = src;

	return ;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;

	delete	_brain;

	return ;
}

Brain	*Cat::getBrain(void) const {

	return this->_brain;
}

Cat	&Cat::operator=(Cat const &rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
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
