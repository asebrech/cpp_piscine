/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:01:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 16:01:15 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	test(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	std::cout << "Unequip 1 and using it :"<< std::endl;
	me->unequip(1);
	me->use(1, *bob);

	std::cout << std::endl;

	std::cout << "Equip 1 with ice and using it :"<< std::endl;
	me->equip(src->createMateria("ice"));
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;

	std::cout << "Equip 2 and using 0 1 2 :"<< std::endl;
	me->equip(src->createMateria("cure"));
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;

	return ;
}

int	main(void)
{
	test();

	//while (1);

	return 0;
}
