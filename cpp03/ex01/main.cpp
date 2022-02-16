/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/16 17:28:11 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	status(ScavTrap &scav) {

	std::cout << std::endl;

	std::cout << "ScavTrap Status :" << std::endl;
	std::cout << "ScavTrap Name : " << scav.getName()  << std::endl;
	std::cout << "ScavTrap Hit points : " << scav.getHitPoint()  << std::endl;
	std::cout << "ScavTrap Energy points : " << scav.getEnergyPoint()  << std::endl;
	std::cout << "ScavTrap Attack damage : " << scav.getAttackDamage()  << std::endl;

	std::cout << std::endl;

	return ;
}

int	main(void) {

	ScavTrap	scav("scav");

	status(scav);

	ScavTrap	clap("clap");

	std::cout << std::endl;
	scav.guardGate();
	clap.attack("scav");
	scav.takeDamage(clap.getAttackDamage());
	scav.attack("clap");
	clap.takeDamage(scav.getAttackDamage());
	scav.guardGate();
	std::cout << std::endl;

	status(scav);

	return 0;
}
