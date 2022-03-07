/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:24:58 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 12:54:49 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {

	std::cout << "stack zombie in comming !" << std::endl;
	randomChump("stack");

	std::cout << std::endl << "heap zombie in comming !" << std::endl;
	Zombie	*heap;
	heap = newZombie("heap");
	heap->announce();
	
	delete heap;

	return 0;
}
