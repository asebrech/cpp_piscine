/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/13 21:37:41 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	scav("scav");
	ClapTrap	clap("clap");

	std::cout << std::endl;
	scav.guardGate();
	clap.attack("scav");
	scav.takeDamage(clap.getAttackDamage());
	scav.attack("clap");
	clap.takeDamage(scav.getAttackDamage());
	scav.guardGate();
	std::cout << std::endl;

	return 0;
}
