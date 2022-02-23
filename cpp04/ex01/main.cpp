/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/23 18:11:02 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void) {

	int	i = 4;
	Animal	*animal[i];

	std::cout << "creating array" << std::endl << std::endl;

	for (int j = 0; j < (i / 2); j++)
	{
		animal[j] = new Dog();	
	}
	
	std::cout << std::endl;

	for (int j = (i / 2); j < i; j++)
	{
		animal[j] = new Cat();	
	}

	std::cout << std::endl << "deleting array" << std::endl << std::endl;


	for (int j = 0; j < (i / 2); j++)
	{
		delete animal[j];
	}

	std::cout << std::endl;
	
	for (int j = (i / 2); j < i; j++)
	{
		delete animal[j];
	}

	return 0;
}
