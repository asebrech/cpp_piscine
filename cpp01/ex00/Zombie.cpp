/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:18:26 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 10:38:03 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

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
