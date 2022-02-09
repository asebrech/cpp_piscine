/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:49 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/09 11:04:52 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {

	return ;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {

	return ;
}

Point::Point(Point const &src) {

	*this = src;

	return ;
}

Point::~Point(void) {

	return ;
}

Fixed	Point::get_x(void) const {

	return this->_x;
}

void	Point::set_x(Fixed x) {

	this->_x = x;

	return ;
}

Fixed	Point::get_y(void) const {

	return this->_y;
}

void	Point::set_y(Fixed y) {

	this->_y = y;

	return ;
}

Point	&Point::operator=(Point const &rhs) {

	this->set_x(rhs.get_x());
	this->set_y(rhs.get_y());

	return *this;
}
