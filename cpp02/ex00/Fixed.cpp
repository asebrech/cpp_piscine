/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:05:38 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/11 18:39:00 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}


Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_raw;
}


void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_raw = raw;

	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignment operator called" << std::endl;

	this->_raw = rhs.getRawBits();

	return *this;
}

int const Fixed::fractional = 8;
