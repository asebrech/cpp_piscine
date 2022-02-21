/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:25 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/21 15:26:53 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _ideas(new std::string[100]) {

	this->_ideas[0] = "";

	std::cout << "Brain default constructor called" << std::endl;

	return ;
}

Brain::Brain(std::string str) : _ideas(new std::string[100]) {


	this->_ideas[0] = str;

	std::cout << "Brain string constructor called" << std::endl;

	return ;
}

Brain::Brain(Brain const &src) {

	std::cout << "Brain copy constructor called" << std::endl;

	*this = src;

	return ;
}

Brain::~Brain(void) {

	delete [] this->_ideas;

	std::cout << "Brain destructor called" << std::endl;

	return ;
}

std::string	*Brain::getIdeas(void) const {

	return this->_ideas;
}

Brain	&Brain::operator=(Brain const &rhs) {

	std::cout << "Brain copy assignment operator called" << std::endl;
	
	for(int i = 0; i <= 100; i++) {

		this->_ideas[i] = rhs.getIdeas()[i];
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Brain const &rhs) {

	o << *rhs.getIdeas();

	return o;

}
