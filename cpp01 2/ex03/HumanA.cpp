/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:06:22 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/01 16:16:21 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}
