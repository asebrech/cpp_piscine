/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:18:26 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 13:11:44 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {

	return ;
}

Zombie::Zombie(std::string str) : name(str) {

	return ;
}
Zombie::~Zombie(void) {

	std::cout << this->name << " zombie killed !" << std::endl;
	return ;
}

void	Zombie::setName(std:: string name) {

	this->name = name;
	return ;
}

void	Zombie::announce(void) const {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
