/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:05:38 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/11 18:41:28 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int raw) : _raw(raw) {

//	std::cout << "Int constructor called" << std::endl;

	this->_toFixed(raw);

	return ;
}


Fixed::Fixed(const float raw) : _raw(raw) {

//	std::cout << "Float constructor called" << std::endl;

	this->_toFixed(raw);	

	return ;
}


Fixed::Fixed(void) : _raw(0), _fixed(0) {

//	std::cout << "Default constructor called" << std::endl;

	return ;
}


Fixed::Fixed(Fixed const &src) {

//	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return ;
}


Fixed::~Fixed(void) {

//	std::cout << "Destructor called" << std::endl;

	return ;
}


void	Fixed::_toFixed(const float raw) {

	this->_fixed = roundf(raw * (1 << this->_fractional));

	return ;
}


float	Fixed::toFloat(void) const {

	return ((float)(this->_fixed / (float)(1 << Fixed::_fractional)));
}


int	Fixed::toInt(void) const {

	return ((this->_fixed / (1 << Fixed::_fractional)));
}

int	Fixed::getRawBits(void) const {

//	std::cout << "getRawBits member function called" << std::endl;

	return (int)this->_raw;
}


void	Fixed::setRawBits(int const raw) {

//	std::cout << "setRawBits member function called" << std::endl;

	this->_raw = raw;

	this->_toFixed(raw);

	return ;
}

int	Fixed::getFixed(void) const {

	return this->_fixed;
}


void	Fixed::setFixed(int fixed) {

	this->_fixed = fixed;

	this->_raw = this->toInt();

	return ;
}


Fixed	&Fixed::operator=(Fixed const &rhs) {

//	std::cout << "Copy assignment operator called" << std::endl;

	this->setFixed(rhs.getFixed());

	return *this;
}


Fixed	&Fixed::operator++() {

	this->_fixed++;

	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed temp = *this;
	++*this;

	return temp;
}


Fixed	&Fixed::operator--() {

	this->_fixed--;

	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed temp = *this;
	--*this;

	return temp;
}


Fixed	operator+(Fixed const &lhs, Fixed const &rhs) {

	Fixed	fixed;

	fixed.setFixed(lhs.getFixed() + rhs.getFixed());

	return fixed;
}

Fixed	operator-(Fixed const &lhs, Fixed const &rhs) {

	Fixed	fixed;

	fixed.setFixed(lhs.getFixed() - rhs.getFixed());

	return fixed;
}

Fixed	operator*(Fixed const &lhs, Fixed const &rhs) {

	return (Fixed(lhs.toFloat() * rhs.toFloat()));
}

Fixed	operator/(Fixed const &lhs, Fixed const &rhs) {

	return (Fixed(lhs.toFloat() / rhs.toFloat()));
}

bool	operator==(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() == rhs.getFixed());
}

bool	operator!=(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() != rhs.getFixed());
}

bool	operator>(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() > rhs.getFixed());
}

bool	operator<(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() < rhs.getFixed());
}

bool	operator>=(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() >= rhs.getFixed());
}

bool	operator<=(Fixed const &lhs, Fixed const &rhs) {

	return (lhs.getFixed() <= rhs.getFixed());
}


Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {

	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {

	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}


float Fixed::min(Fixed const &lhs, Fixed const &rhs) {

	if (lhs < rhs)
		return lhs.toFloat();
	else
		return rhs.toFloat();
}

float Fixed::max(Fixed const &lhs, Fixed const &rhs) {

	if (lhs > rhs)
		return lhs.toFloat();
	else
		return rhs.toFloat();
}


std::ostream	&operator<<(std::ostream &o, Fixed const &i) {

	o << i.toFloat();

	return o;
}

int const Fixed::_fractional = 8;
