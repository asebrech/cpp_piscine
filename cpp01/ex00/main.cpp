/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:24:58 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 10:40:36 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int	main(void) {

	std::cout << "stack zombie in comming !" << std::endl;
	randomChump("stack");

	std::cout << std::endl << "heap zombie in comming !" << std::endl;
	Zombie	*heap;
	heap = newZombie("heap");
	heap->announce();
	
	delete heap;
	std::cout << std::endl << "heap zombie killed !" << std::endl;

	return 0;
}
