/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:53:38 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/01 16:49:34 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(void) {

	return ;
}

Weapon::Weapon(std::string const &type) : _type(type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string const	&Weapon::getType(void) const {

	return this->_type;
}

void	Weapon::setType(std::string const &type) {

	this->_type = type;
}
