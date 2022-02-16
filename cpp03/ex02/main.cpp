/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/16 17:30:43 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	status(FragTrap &frag) {

	std::cout << std::endl;

	std::cout << "FragTrap Status :" << std::endl;
	std::cout << "FragTrap Name : " << frag.getName()  << std::endl;
	std::cout << "FragTrap Hit points : " << frag.getHitPoint()  << std::endl;
	std::cout << "FragTrap Energy points : " << frag.getEnergyPoint()  << std::endl;
	std::cout << "FragTrap Attack damage : " << frag.getAttackDamage()  << std::endl;

	std::cout << std::endl;

	return ;
}


int	main(void) {

	FragTrap	frag("frag");

	status(frag);

	ScavTrap	scav("scav");

	std::cout << std::endl;
	scav.guardGate();
	frag.attack("scav");
	scav.takeDamage(frag.getAttackDamage());
	scav.attack("frag");
	frag.takeDamage(scav.getAttackDamage());
	frag.highFivesGuys();
	scav.guardGate();
	std::cout << std::endl;

	status(frag);

	return 0;
}
