/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 15:58:27 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	status(DiamondTrap &diamond) {

	std::cout << std::endl;

	std::cout << "DiamondTrap Status :" << std::endl;
	std::cout << "DiamondTrap Name : " << diamond.getName()  << std::endl;
	std::cout << "DiamondTrap Hit points : " << diamond.getHitPoint()  << std::endl;
	std::cout << "DiamondTrap Energy points : " << diamond.getEnergyPoint()  << std::endl;
	std::cout << "DiamondTrap Attack damage : " << diamond.getAttackDamage()  << std::endl;

	std::cout << std::endl;

	return ;
}

int	main(void) {

	DiamondTrap	diamond("diamond");

	status(diamond);

	FragTrap	frag("frag");
	
	std::cout << std::endl;

	diamond.guardGate();
	frag.attack("diamond");
	diamond.takeDamage(frag.getAttackDamage());
	diamond.attack("frag");
	frag.takeDamage(diamond.getAttackDamage());
	diamond.whoAmI();
	diamond.highFivesGuys();

	std::cout << std::endl;

	status(diamond);

	return 0;
}
