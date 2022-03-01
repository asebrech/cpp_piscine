/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:01:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 20:49:42 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	Cure	*a = new Cure("117");
	ICharacter	*c = new Character("alois");

	ICharacter *b = c;	

	b->equip(a);
	b->use(0, *b);
	delete b;
	//std::cout << a.getType() << std::endl;

}
