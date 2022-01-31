/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:24:58 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 11:46:20 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int	main(void) {

	int	fu = 42;

	std::cout << "horde of zombies in comming !!" << std::endl << std::endl;

	Zombie	*horde = zombieHorde(fu, "bar");
	
	for (int i = 0; i < fu; i++)
		horde[i].announce();	

	delete [] horde;
	std::cout << std::endl << "horde of zombies killed !!" << std::endl;

	return 0;
}
