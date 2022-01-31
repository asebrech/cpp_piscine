/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:18:26 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 11:35:44 by asebrech         ###   ########.fr       */
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

	return ;
}

void	Zombie::announce(void) const {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
