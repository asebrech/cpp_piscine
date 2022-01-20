/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:47:00 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/20 17:09:18 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {

	return;
}

Contact::~Contact(void) {

	return;
}

void	Contact::setFname(std::string str) {

	this->_fname = str;
	return;
}

std::string	Contact::getFname(void) const {

	return this->_fname;
}

void	Contact::setLname(std::string str) {

	this->_lname = str;
	return;
}

std::string	Contact::getLname(void) const {

	return this->_lname;
}


void	Contact::setNname(std::string str) {

	this->_nname = str;
	return;
}

std::string	Contact::getNname(void) const {

	return this->_nname;
}


void	Contact::setPhone(std::string str) {

	this->_phone = str;
	return;
}

std::string	Contact::getPhone(void) const {

	return this->_phone;
}


void	Contact::setDark(std::string str) {

	this->_dark= str;
	return;
}

std::string	Contact::getDark(void) const {

	return this->_dark;
}
