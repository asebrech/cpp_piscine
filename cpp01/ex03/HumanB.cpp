/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:18:42 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/01 16:58:06 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {

	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack without a weapon it will be suicide !!" << std::endl;
	return ;
}
