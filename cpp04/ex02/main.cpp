/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:05:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:44:49 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	test(void)
{
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
}

void	test_1(void)
{
	Dog	a;
	Dog	b(a);

	a.getBrain()->getIdeas()[0] = "Hello";

	b.getBrain()->getIdeas()[0] = "World";

	std::cout << std::endl;
	std::cout << a.getBrain()->getIdeas()[0] << std::endl; 
	std::cout << b.getBrain()->getIdeas()[0] << std::endl; 
	std::cout << std::endl;
}

int	main(void) {

	//Animal	*test = new Animal(); // this shouldn't work

	test();

	std::cout << std::endl;

	test_1();

	//while (1);

	return 0;
}
