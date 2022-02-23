/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/22 15:59:36 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	status(ClapTrap &clap) {

	std::cout << std::endl;

	std::cout << "ClapTrap Status :" << std::endl;
	std::cout << "ClapTrap Name : " << clap.getName()  << std::endl;
	std::cout << "ClapTrap Hit points : " << clap.getHitPoint()  << std::endl;
	std::cout << "ClapTrap Energy points : " << clap.getEnergyPoint()  << std::endl;
	std::cout << "ClapTrap Attack damage : " << clap.getAttackDamage()  << std::endl;

	std::cout << std::endl;

	return ;
}

int	main(void) {

	ClapTrap	clap("clap");
	ClapTrap	trap("trap");

	status(clap);

	std::cout << std::endl;
	for (int i = 0; i <= 10; i++) {

		clap.attack("trap");
		trap.takeDamage(0);
		trap.attack("clap");
		clap.takeDamage(0);
	}
	std::cout << std::endl;

	status(clap);

	return 0;
}
