/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/13 17:35:40 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	clap("clap");
	ClapTrap	trap("trap");


	for (int i = 0; i <= 10; i++) {

		clap.attack("trap");
		trap.takeDamage(0);
		trap.attack("clap");
		clap.takeDamage(0);
	}

	return 0;
}
